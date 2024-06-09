#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<climits>
#include<cstring>
#define ll long long int
using namespace std;
  ll n;
 ll dp[10005][10005];
vector<ll>x,y; //x -> captain and y -> assistant
ll f(vector<ll> &x, vector<ll>&y, ll i, ll diff){
  if(i>=n) return 0;
  if(dp[i][diff]!=-1) return dp[i][diff];
  if(diff==0){ //assi==cap
    return dp[i][diff]= y[i]+f(x,y,i+1,diff+1);
  }
  else if(diff==n-i){ // all prev are assi
    return dp[i][diff] =x[i] + f(x,y,i+1,diff-1);
  }
  else{ //compare
    return dp[i][diff] = min(x[i]+f(x,y,i+1,diff-1), y[i] + f(x,y,i+1,diff+1));
  }
}

int main(){
      cin>>n;
      // dp.clear();
      // dp.resize(10005, vector<ll>(1000005,-1));
      memset(dp,-1,sizeof(dp));
      for(int i=0;i<n;i++){
        ll c,a;
        cin>>c>>a;
        x.push_back(c);
        y.push_back(a);
      }
      cout<< y[0] + f(x,y,1,1);

}