#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<climits>
#include<cstring>
#define ll long long int
using namespace std;
int dp[105][105];
int g(vector<int>& mix,int i, int j){
    ll result=0;
    for(int m=i;m<=j;m++){
        result =(result%100 + mix[m]%100) %100;
    }
    return result;
}
    ll f(vector<int>& mix,int i, int j){
       if(i==j) return dp[i][j] = 0;
       if(dp[i][j]!=-1) return dp[i][j];
       ll ans=INT_MAX;
       for(int k=i;k<j;k++){
        ans = min(ans,f(mix,i,k) + f(mix,k+1,j) + g(mix,i,k)*g(mix,k+1,j));
       }
       return dp[i][j] = ans;
    }
    int fbt(vector<int>& mix){
        memset(dp,0,sizeof(dp));
          int n=mix.size();
        for(int len=2;len<=n;len++){
            for(int i=0; i<=n-len;i++){
                int j=i +len-1;
                int ans=INT_MAX;
            for(int k=i;k<=j-1;k++){
                 ans = min(ans,dp[i][k] + dp[k+1][j] + g(mix,i,k)*g(mix,k+1,j));
                }
                dp[i][j] =ans;
            }
        }
        return dp[0][n-1];
    }
int main(){
    int n;
    while(cin>>n){
    vector<int>mix(n);
   // memset(dp,-1,sizeof(dp));
    for(int i=0;i<n;i++){
       cin>>mix[i];
      
    }
     cout<<fbt(mix)<<endl;
    //cout<<f(mix,0,mix.size()-1)<<endl;
        mix.clear();
       
    }



}