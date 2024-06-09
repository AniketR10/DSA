#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <climits>
#include <cstring>
#define ll long long int
using namespace std;
 int n;
   vector<int>v;
  vector<vector<int>>dp;
    int f(int prev, int curr){
        if(curr>= n) return 0;
        if(dp[prev+1][curr] !=-1) return dp[prev+1][curr];
        // not pick
        int len =0;
        len =f(prev,curr+1);
        if(prev == -1 or v[prev]<v[curr]){
            len = max( len, 1+f(curr, curr+1));
        }
        return dp[prev+1][curr] = len;

    }
 
int main(){
   
    cin>>n;

    v.clear();
    v.resize(n);
 dp.clear();
 dp.resize(10005, vector<int>(10005,-1));
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    cout<<f(-1,0);
   
}