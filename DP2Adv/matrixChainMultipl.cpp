#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<climits>
#include<cstring>
using namespace std;
 vector<vector<int>>dp;
 int f(vector<int>& ele,int i, int j){
        if(i==j || i+1==j) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int ans=INT_MAX;
            for(int k=i+1;k<=j-1;k++){
                ans = min(ans,f(ele,i,k)+f(ele,k,j) + ele[i]*ele[k]*ele[j]);
            }
            return  dp[i][j] = ans;
         }

int main(){
    int n;
    cin>>n;
    dp.clear();
    dp.resize(n+10,vector<int>(n+10,0));
      vector<int> ele(n);
    for(int i=0;i<n;i++){
        cin>>ele[i];
    }
 // cout<<f(ele,0,n-1);
 //bottom up solution
    for(int len =3;len<=n;len++){ //length of the subarray
        for(int i=0; i+len-1<n;i++){
            int j=i+len-1;
            dp[i][j] =INT_MAX;
            for(int k=i+1;k<=j-1;k++){
                  dp[i][j] = min(dp[i][j],dp[i][k]+dp[k][j] + ele[i]*ele[k]*ele[j]);
            }

        }
    }
    cout<<dp[0][n-1];

      

}