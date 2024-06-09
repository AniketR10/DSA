#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#define ll long long int
using namespace std;
vector<int> v;
vector<int>dp;
    int k,l,m;
    int f(int n){
        if(n==1 || n==k || n==l) return 1;
        if(dp[n]!=-1) return dp[n];
        return dp[n] = !(f(n-1) && ((n-k>=1)?f(n-k):1) && ((n-l>=1)?f(n-l):1));
    }
    int fbt(int n){
        dp.clear();
        dp.resize(1000005,-1);
        dp[1]=1;
        dp[k]=1;
        dp[l]=1;
        for(int i=2;i<=dp.size();i++){
            if(i==k || i==l) continue;
            dp[i]= !(dp[i-1] && ((i-k>=1)?dp[i-k]:1) && ((i-l>=1)?dp[i-l]:1));
        }
        return dp[n];
    }
int main(){
    cin>>k>>l>>m;
    for(int i=0;i<m;i++){
        int num;
        cin>>num;
        v.push_back(num);
    }
     dp.clear();
    dp.resize(1000005,-1);
    for(int i=0;i<m;i++){
        if(f(v[i])==1) cout<<"A";
        else cout<<"B";
    }
    
    
} 