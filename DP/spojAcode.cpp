#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<climits>
#include<cstring>
#define ll long long int
using namespace std;
vector<ll> dp;
   ll f(string &str, int i){
      if(i<=0) return 1;
      if(dp[i]!=-1) return dp[i];
      // taking single digit
      ll ans=0;
      if(str[i] - '0' >0){
         ans +=f(str,i-1);
      }
      // taking double
      if( str[i-1] -'0' >0 and (str[i-1] -'0')*10 +(str[i] - '0') <= 26){
         ans+= f(str,i-2);
      }
      return dp[i]= ans;
   }
   int fbt(string& str){
      dp.clear();
      dp.resize(5005,0);
      int n=str.size();
      dp[0]=1;
       if(str[1] > '0') dp[1] +=dp[0];
        if((str[0]- '0')*10 +(str[1] - '0')<=26) dp[1]++;

         for(int i=2;i<str.size();i++){
          
      if(str[i] - '0' >0){
         dp[i] +=dp[i-1];
      }
      
      if( str[i-1] -'0' >0 and (str[i-1] -'0')*10 +(str[i] - '0') <= 26){
         dp[i] += dp[i-2];
      }
     
         }
         return dp[n-1];


   }
   int main(){
      string n;
      cin>>n;
      while(n[0]!= '0'){
          dp.clear();
      dp.resize(5000,-1);
        // cout<<fbt(n)<<endl;
         cout<<f(n,n.size()-1);
         cin>>n;
      }
      
   

   
   }