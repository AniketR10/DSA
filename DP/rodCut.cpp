#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <climits>
#include <cstring>
#define ll long long int
using namespace std;

int main(){
    int n;
    cin>>n;
     vector<int>price;
    price.resize(n);
   
    for(int i=0;i<n;i++){
        cin>>price[i];
    }
    vector<int> dp(1000,0);
   
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(j ==i) {
                dp[i] = max(dp[i],price[j]);
                break;
            }
            dp[i] =max(dp[i],dp[j] +  dp[i-j-1]);
        }
    }
    cout<<dp[n-1];
 
   



}
