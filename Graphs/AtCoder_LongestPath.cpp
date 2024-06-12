#include<bits/stdc++.h>
#include<climits>
using namespace std;
    vector<list<int>> graph;
    vector<int> dp;
    void f(int curr, int end){
        graph[curr].push_back(end);
    }
   
   int dfs(int curr){
    if(dp[curr] != -1) return dp[curr];

    bool leaf =1;
    int maxDia=0;
        for(auto neighbour : graph[curr]){
           leaf =0;
           maxDia =max(maxDia, dfs(neighbour));
        }
        return dp[curr] = leaf ? 0:1+maxDia;
        
   }
    int main(){
        int n,m;
        cin>>n>>m;
        graph.resize(n+1,list<int>());
        dp.clear();
        dp.resize(100005,-1);
        while(m--){
            int curr,end;
            cin>>curr>>end;
            f(curr,end);
        }
        int ans=0;
            for(int i=1;i<=n;i++){  
                
                ans=max(ans,dfs(i));
            }
            cout<<ans;
    }