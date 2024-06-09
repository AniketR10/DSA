#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<climits>
#include<cstring>
#define ll long long int
using namespace std;
ll n,W;
vector<ll>w,v; 
ll dp[105][100005];
ll f(int i, ll weight){
    if(i>=n) return 0;
    if(dp[i][weight]!=-1) return dp[i][weight];
    ll ans=INT_MIN;
    ans= max(ans,f(i+1, weight));
    if(weight+w[i]<=W){
     ans= max(ans,v[i]+ f(i+1, weight+w[i]));
     }   
      return  dp[i][weight]= ans;
}
int main(){
    cin>>n>>W;
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<n;i++){
        ll we,val;
        cin>>we>>val;
        w.push_back(we);
        v.push_back(val);
    }
    cout<<f(0,0);

}
//  #include<iostream>
// #include<vector>
// #include<string>
// #include<algorithm>
// #include<climits>
// #include<cstring>
// #define ll long long int
// using namespace std;
// ll n,W;
// vector<ll>w,v; 
// vector<vector<ll>>dp;
// ll f(int i, ll weight){
//     if(i>=n) return 0;
//     if(dp[i][weight]!=-1) return dp[i][weight];
//     ll ans=INT_MIN;
//     ans= max(ans,f(i+1, weight));
//     if(weight+w[i]<=W){
//      ans= max(ans,v[i]+ f(i+1, weight+w[i]));
//      }   
//       return  dp[i][weight]= ans;
// }
                                                    // OR
// ll fbt(int n){
//     dp.clear();
//     dp.resize(105,vector<ll>(100005,0));
//     for(int i=n-1;i>=0;i--){
//         for(int j=0;j<=W;j++){
//               dp[i][j] = max(dp[i+1][j], ((j>=w[i])?(v[i] + dp[i+1][j-w[i]]):0));
//         }  
//     }
//     return dp[0][W];
// }
                                                    //OR
// ll fbt(int n){
//     dp.clear();
//     dp.resize(105,vector<ll>(1000000005,0));
//     for(int i=1;i<=n;i++){
//         for(int j=0;j<=W;j++){
//               dp[i][j] = max(dp[i-1][j], ((j>=w[i-1])?(v[i-1] + dp[i-1][j-w[i-1]]):0));
//         }  
//     }
//     return dp[n][W];
// }
// int main(){
//     cin>>n>>W;
//     dp.clear();
//     dp.resize(105,vector<ll>(100005,0));
//     for(int i=0;i<n;i++){
//         ll we,val;
//         cin>>we>>val;
//         w.push_back(we);
//         v.push_back(val);
//     }
//     cout<<fbt(n);

// }
 

