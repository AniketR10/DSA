#include<bits/stdc++.h>

using namespace std;

 vector<list<int>> graph;
  int v;
    void f(int curr, int end,bool bi_dir){
        graph[curr].push_back(end);
            if(bi_dir){
                graph[end].push_back(curr);
            }
    }
    
    void topoBFS(){
        //kahn algo
        
    vector<int>inDegree(v);
    queue<int> q;

     for(int i =0;i<v;i++){
      
         for(auto neighbour : graph[i]){

            inDegree[neighbour]++;

         }
     }
      unordered_set<int> visited;

     for(int i =0;i<v;i++){
      
        if(inDegree[i] == 0) {
          q.push(i);
        visited.insert(i);
        
        }
     }

     while(!q.empty()){
        int curr =q.front();
        cout<<curr<<" ";
        q.pop();
        
        for(auto neighbour : graph[curr]){
          if(not visited.count(neighbour)) {
             inDegree[neighbour]--;
             
            if( inDegree[neighbour] == 0){
                q.push(neighbour);
                visited.insert(neighbour);
            }
          }
        }

     }
    }
    
  int main(){
   
    int e;
    cin>>v>>e;
    graph.resize(v,list<int>());
    while(e--){

        int curr,end;
        cin>>curr>>end;
        f(curr,end,false);

        
    }
    topoBFS();
    //  if(visited.size() == v) cout<<"the graph is resolved ";
    //  else cout<<"the graph is not resolved";
     


     }

        
     


   
   

    
    
