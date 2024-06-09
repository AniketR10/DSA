#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<climits>
#include<cstring>
#define ll long long int
using namespace std;
    vector<vector<ll>>dp;
  ll f(vector<int>&w, vector<int>&v, int i, int N, int tv){
     if(tv==0) return 0;
    if(i>=N) return INT_MAX;
    if(dp[i][tv]!=-1) return dp[i][tv];
    ll ans=INT_MAX;
    //not pick
    ans=min(ans,f(w,v,i+1,N,tv));
    //pick
    if(tv>=v[i]){
      ans=min(ans,w[i] + f(w,v,i+1,N,tv-v[i]));
    }
    return dp[i][tv] = ans;
  }

  ll fbt(vector<int> &w, vector<int>&v, int tv, int W){
    dp.clear();
    dp.resize(105, vector<ll>(100005,INT_MAX));
    //i-> weight
    //j -> tv
    for(int i=0;i<dp.size();i++){
      dp[i][0]=0;
    }
    int n=w.size();
    for(int i=n-1;i>=0;i--){
      for(int j=0;j<=tv;j++){
        ll ans=INT_MAX;
        // not pick
        ans=min(ans,dp[i+1][j]);
        // pick
        if(v[i]<=j){
          ans=min(ans, w[i] + dp[i+1][j-v[i]]);
        }
        dp[i][j]= ans;
      }
    }
   int result=-1;
   for(int i=0;i<=n*1000;i++){
    if(dp[0][i]<=W) {
      result = i;
    }
   }
   return result;
  }
int main(){
  int N,W;
  cin>>N>>W;
   vector<int> w,v;
  for(int i=0;i<N;i++){
    int we,val;
    cin>>we>>val;
    w.push_back(we);
    v.push_back(val);
  }
  // int result = -1;
  // for(int j=0;j<=N*1000;j++){
  //   if(f(w,v,0,N,j) <= W){
  //   result = j;
  //   }
  // }
  // cout<<result;
  cout<<fbt(w,v,N*1000, W);
}