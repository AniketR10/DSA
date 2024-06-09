#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<climits>
#include<cstring>
#define ll long long int
using namespace std;
  int n;
 int W,H;
char s[105][105];
ll dp[105][105][105];
    ll f(ll i, ll j, ll x, ll y){
        if(i>H or j>W or x>H or y>W or s[i][j] == '#' or s[x][y] == '#') return 0;
        if(dp[i][j][x]!=-1) return dp[i][j][x];
            if(i==H and j==W){
                return s[i][j]=='*';
            }
            ll result =INT_MIN;
            result =max(result, f(i+1,j,x+1,y));
             result =max(result, f(i+1,j,x,y+1));
              result =max(result, f(i,j+1,x+1,y));
               result =max(result, f(i,j+1,x,y+1));
               result +=(s[i][j]=='*');
               result+=(s[x][y]=='*');
               if(i==x and j== y and s[i][j] == '*') result--;
               
               return dp[i][j][x] = result;


    }
int main(){
  
    cin>>n;
    while(n--){
       memset(dp,-1,sizeof(dp));
        cin>>W>>H;
        for(int i=1;i<=H;i++){
            for(int j=1;j<=W;j++){
                cin>>s[i][j];
            }
        }
        cout<<f(1,1,1,1)<<endl;
    }

}