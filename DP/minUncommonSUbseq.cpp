#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<climits>
#include<cstring>
using namespace std;
  int dp[505][505];
        int f(int i, int j, string &S, string &T){
            if(i>=S.size()) return INT_MAX-50;
            if(j>=T.size()) return 1;
            if(dp[i][j]!=-1) return dp[i][j];
			int k=-1;
            for(int l=j;l<=T.size();l++){
                if(T[l]==S[i]){
						k=l;
                    break;
                }
            }
            if(k==-1) return 1;
               else{
				return dp[i][j] = min(f(i+1,j,S,T),1+f(i+1,k+1,S,T));
			   }     
            
        }
  
    int shortestUnSub(string &S, string &T) {
        memset(dp,-1,sizeof(dp));
                if(f(0,0,S,T)==INT_MAX-50) return -1;
                return f(0,0,S,T);
	}
    
	int main(){
		string S,T;
		cin>>S>>T;
		cout<<shortestUnSub(S,T);
	}
