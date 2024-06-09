#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<climits>
#include<cstring>
using namespace std;
vector<vector<int>> dp;
  int f(string &s, string &t, int i, int j){
    if(i>=s.size() || j>=t.size()) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    if(s[i]==t[j]){
      return dp[i][j]= 1+ f(s,t,i+1,j+1);
    }
    else{
      return dp[i][j]=max(f(s,t,i+1,j),f(s,t,i,j+1));
    }
  
  }
  
 int main(){
  dp.clear();
  dp.resize(3005,vector<int>(3005,0));
    string s,t;
    cin>>s>>t;
    int n=s.size();
    int m=t.size();
      for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
          if(s[i-1]==t[j-1]){
            dp[i][j]= 1+ dp[i-1][j-1];
          }
          else{
            dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
          }
        }
      }
      string ans="";
        int i=n,j=m;
        while(i>0 && j>0){
        if(s[i-1]==t[j-1]){
          ans+=s[i-1];
          i--;
          j--;
        }
        else{
          if(dp[i-1][j]>dp[i][j-1]){
            i--;
          }
          else j--;
        }
        }
     reverse(ans.begin(),ans.end());
      //cout<<ans;
      cout<<dp[n][m];
    //cout<<f(s,t,0,0);

 }