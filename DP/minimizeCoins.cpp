#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
vector<int> dp(1000005, -2);
vector<int> v;
    int f(int x){
        if(x==0) return 0;
        if(dp[x]!=-2) return dp[x];
        int res=INT_MAX;
        for(int i=0;i<v.size();i++){
            if(x<v[i]) continue; 
            res=min(res,f(x-v[i]));
        }
        if(res==INT_MAX) return dp[x]=INT_MAX;
        return dp[x]= 1+res;
    }
int main(){
    int n,x;
    cin>>n>>x;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        v.push_back(num);
    }
  int ans=f(x);
  if(ans==INT_MAX) cout<<-1;
  else cout<<ans;

    
}