#include <iostream>
#include<algorithm>
#include<vector>
#include<climits>
#include<cstring>
using namespace std;
int k;
 vector<int>t1,t2;
 int dp[2005][2005][7];
int f(int i, int j, vector<int>&t1, vector<int>&t2,int k){
	if(i>=t1.size() || j>=t2.size()) return 0;
	if(dp[i][j][k]!=-1) return dp[i][j][k];
	if(t1[i]==t2[j]){
		return dp[i][j][k]=1+f(i+1,j+1,t1,t2,k);
	}
	else{
		if(k>0){
	return dp[i][j][k]=max({1+f(i+1,j+1,t1,t2,k-1),f(i+1,j,t1,t2,k),f(i,j+1,t1,t2,k)});
		}
		else{
			return dp[i][j][k]=max(f(i+1,j,t1,t2,k),f(i,j+1,t1,t2,k));
		}
	}

}
	
int main(){
int n,m;
	cin>>n>>m>>k;
	memset(dp,-1,sizeof(dp));
	for(int i=0;i<n;i++){
        int a;
		cin>>a;
		t1.push_back(a);
	}
	for(int i=0;i<m;i++){
        int b;
		cin>>b;
		t2.push_back(b);
	}
	cout<<f(0,0,t1,t2,k);
}