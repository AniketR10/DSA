#include<iostream>
#include<vector>
using namespace std;
 vector<bool> dp(1000005,0);
int main(){
    int k,l,m;
    cin>>k>>l>>m;
    vector<int>v;
    for(int i=0;i<m;i++){
        int num;
        cin>>num;
        v.push_back(num);
    }
    dp[1]=1;
    dp[k]=1;
    dp[l]=1;
    for(int i=2;i<=dp.size();i++){
        if(i==k || i==l) continue;
       // if(i-k<0|| i-l<=0) continue; 
       dp[i]=!(dp[i-1] &&((i-k>=1)?dp[i-k]:1)&&((i-l)?dp[i-l]:1));
    }
    for(int i=0;i<m;i++){
      if(dp[v[i]]==1){
        // n->is a winning state
        cout<<'A';
      }
      else{
        //n-> loosing state
        cout<<'B';
      }
 
    }
 
 
 
} 