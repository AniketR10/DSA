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

    // bfs
   bool bfs(int i, unordered_set<int>& visited){
     
        queue<int> q;
        vector<int>parent(v,-1);
        q.push(i);
        visited.insert(i);
        while(!q.empty()){
            auto curr = q.front();
            q.pop();
            for(auto neighbour : graph[curr]){
                if(visited.count(neighbour) and parent[curr] != neighbour) return true;
                if(not (visited.count(neighbour))){
                    q.push(neighbour);
                    visited.insert(neighbour);
                    parent[neighbour] =curr;
                }
            }

        }
        return false;

   }

    bool in_cycle(){
        unordered_set<int> visited;
        bool res =false;
        for(int i=0;i<v;i++){
           if(!visited.count(i)){
           if( bfs(i,visited)){
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
   
  in_cycle();
  if(in_cycle() == true) cout<<"Cycle detected ";

    
}
