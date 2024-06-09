#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<climits>
#include<cstring>
#define ll long long int
using namespace std;
     int n;
    vector<ll>v;
    ll dp[3005][3005];
    ll f(int i, int j){ //recursive
        if(i==j) return dp[i][j] = v[i];
        if(dp[i][j]!=-1) return dp[i][j];
        return dp[i][j] = max(v[i]-f(i+1,j),v[j]-f(i,j-1));
    }
    ll fbt(int n){ //bottom up
        memset(dp,0,sizeof(dp));
        for(int i=0;i<n;i++){
            dp[i][i] =v[i];
        }
        for(int len=2;len<=n;len++){
            for(int i=0;i<n-len+1;i++){
                int j=i+len-1;
                dp[i][j] = max(v[i]-dp[i+1][j],v[j]-dp[i][j-1]);
            }
        }
        return dp[0][n-1];
    }
int main(){
    cin>>n;
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<n;i++){
        ll val;
        cin>>val;
        v.push_back(val);
    }
   // cout<<f(0,n-1);
   cout<<fbt(n);
    
}