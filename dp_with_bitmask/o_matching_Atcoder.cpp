#include<bits/stdc++.h>
 
using namespace std;
#define mod 1000000007
int dp[22][1<<22];
int f(int i, int mask, int n,  vector<vector<int>>& com){ // mask ->no. of women available int total
   if(i >=n+1){
    if( mask == 0){
        return 1; //we found one way
    }
    return 0; 
   }
    if(dp[i][mask] !=-1) return dp[i][mask];
      int ans =0;
   for(int w =1;w<=n; w++){
  
    bool available =  (mask & (1<<(w-1)) )? 1: 0 ;   // check whether that women is available or not
    if( available and com[i][w] ){
        ans  =( (ans%mod) + f(i+1, mask ^ (1<<(w-1)), n, com)%mod)%mod;
    }
   
   }
    return dp[i][mask]= ans;

}
int main(){

    int n;
    cin>>n;
     vector<vector<int>> com(n+1, vector<int>(n+1)); // 1 based indexing
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cin>>com[i][j];
            }
        }   
        memset(dp,-1,sizeof(dp));

        cout<<f(1,(1<<n)-1,n, com);
    
}