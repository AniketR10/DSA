#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
vector<int> dp;
vector<int> digits(int n){
    vector<int> v;
    while(n>0){
        if(n%10!=0){
            v.push_back(n%10);
        }
        n/=10;
    }
    return v;
}
    int f(int n){
        if(n==0) return 0;
        if(n<=9) return 1;
        if(dp[n]!=-1) return dp[n];
        vector<int> tdigits= digits(n);
        int res=INT_MAX;
        for(int i=0;i<tdigits.size();i++){
            res=min(res, f(n-tdigits[i]));
        }
        return dp[n]= 1+res;
    }
    int fbt(int num){
        dp.clear();
        dp.resize(1000006,-1);
        dp[0]=0;
        for(int i=1; i<=9;i++) dp[i]=1;
         for(int n=10;n<=num;n++){
             vector<int> td= digits(n);
             int res=INT_MAX;
                for(int i=0;i<td.size();i++){
                      res=min(res, dp[n-td[i]]);
                }
                dp[n]= 1+res;
         }
         return dp[num];
      
    }
int main(){
    dp.clear();  
    int n;
    cin>>n;
    dp.resize(n+1,-1);
    //or we can take 1000006 in place of n+1
    //cout<<f(n);
    cout<<fbt(n);
}