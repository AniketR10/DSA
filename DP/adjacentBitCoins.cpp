//spoj
#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<cstring>
using namespace std; 

     int dp[105][105][2];

    int f(int n,int k, int last){
        if(n==0) return 0;
        if(n==1){
            if(k==0) return 1;
            else return 0;
        }
        if(dp[n][k][last]!=-1) return dp[n][k][last];
        if(last==0){
           return  dp[n][k][last]=f(n-1,k,0)+f(n-1,k,1);
        }
        else if(last==1){
           return  dp[n][k][last]=f(n-1,k,0)+f(n-1,k-1,1);
        }
    }

    int main(){

         memset(dp,-1,sizeof(dp));
   int ans;
      int p;
      cin>>p;
     while(p>0){
        int num,n,k;
        cin>>num>>n>>k;
        p--;
        ans=f(n,k,0)+f(n,k,1);
        cout<<num<<" "<<ans<<endl;
     }
    }