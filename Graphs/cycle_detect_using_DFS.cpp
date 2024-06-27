#include<bits/stdc++.h>

using namespace std;
int v;
    vector<list<int>> graph;
    void f(int curr, int dist, bool bi_dir =true){
        graph[curr].push_back(dist);
        if(bi_dir){
            graph[dist].push_back(curr);
        }
    }

    // dfs
    bool dfs(int node, unordered_set<int>& visited, int parent){
         visited.insert(node); 
        for(auto neighbour : graph[node]){
            if(visited.count(neighbour) and neighbour != parent){
                return true;
            }
            if(!visited.count(neighbour)){
                bool ans =dfs(neighbour,visited,node);
                if(ans == true) return true;
               
            }
        }
        return false;
    }

    bool in_cycle(){
        unordered_set<int> visited;
        bool res =false;
        for(int i=0;i<v;i++){
           if(!visited.count(i)){
           if( dfs(i,visited,-1)){
            return true;
           }
           }
           
        }
        return false;
    }

int main(){
    int e;
    cin>>v>>e;

    graph.resize(v,list<int>());

    while(e--){
        int curr,dest;
        cin>>curr>>dest;
        f(curr,dest);
    }
   
  if(in_cycle() == true) cout<<"Cycle detected ";
  else cout<<"No cycle detected";

    
}
