#include<iostream>
#include<queue>
#include<vector>
#include<list>
#include<climits>
#include<unordered_set>
using namespace std;
 int v;  
vector<list<int>> graph;
unordered_set<int> explored;
 //shortest path
    void cons(int src, int des, bool bi_dir = true){ //graph construction
       graph[src].push_back(des);
        if(bi_dir){
            graph[des].push_back(src);
        }
    }
    //bfs
    void bfs(int src,vector<int>& ans){
          queue<int> q;
        ans.resize(graph.size(),INT_MAX);
        ans[src] =0;
         explored.insert(src);
        q.push(src);
        while(!q.empty()){
            int curr= q.front();
            q.pop();
            for(auto neighbour : graph[curr]){
                if(!(explored.count(neighbour))){
                q.push(neighbour);
               ans[neighbour] = ans[curr] +1;
                explored.insert(neighbour); 
                }
            }
        }
       
    }

int main(){
   //vertices we want
    cin>>v;
    graph.resize(v,list<int>());
    int e;
    cin>>e; // how many edges you want
    while(e--){
        int src, des;
        cin>>src>>des;
        cons(src,des);
    }
    int x;
    cin>>x;
    vector<int> ans;
    bfs(x,ans);
    for(int i=0;i<ans.size();i++){
        if(ans[i] == INT_MAX){
            cout<<"unreachble ";
            continue;
        }
        cout<<ans[i]<<" ";
    }

}