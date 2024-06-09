#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<climits>
#include<cstring>
#include<iomanip>
#define ll long long int
using namespace std;
double dp[3005][3005];
vector< double> p;
 double f(int i, int x){
     if(x == 0) return 1;
        if(i == -1) return 0;
        if(dp[i][x] > -0.9) return dp[i][x];
        return dp[i][x] = f(i-1,x-1)*p[i] +f(i-1,x)*(1-p[i]);
}
int main(){
    int n;
    cin>>n;
    vector< double> v(n);
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    p=v;
    cout<<fixed<<setprecision(10)<<f(n-1, (n+1)/2);
    
}