#include<iostream>
#include<vector>
#include<climits>
using namespace std;

vector<int> h; //heights
vector<int> dp;
int k;

    int minCost(int i){ // recursive
        if(i>=h.size()){
            return INT_MAX;
        }
        if(i == h.size()-1){
            //last stone
            return 0;
        }
        if(dp[i] !=-1) return dp[i];
       
        int ans=INT_MAX;
        for(int j=1;j<=k;j++){
            if(i+j>=h.size()) break;
            ans=min(ans, abs(h[i]-h[i+j]) + minCost(i+j));
        }
        dp[i]=ans;
        return ans;

    }
    int iter(int n){ //iterative
       // int n=h.size();
        dp.resize(10000,INT_MAX);
        dp[n-1]=0;
        for(int i=n-2;i>=0;i--){
            for(int j=1;j<=k;j++){
                if(i+j>=h.size()) break;
                dp[i]=min(dp[i], abs(h[i]-h[i+j])+dp[i+j]);
            }
        }
        return dp[0];
    }

int main(){
    int n;
    cout<<"enter";
    cin>>n>>k;
    h.resize(n);
    //dp.resize(n,-1);
    for(int i=0;i<n;i++) cin>>h[i];
   //cout<<minCost(0)<<endl;
   cout<<iter(n)<<endl;

}