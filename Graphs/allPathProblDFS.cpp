#include<iostream>
#include<vector>
#include <algorithm>
#include<list>
#include<unordered_set>
using namespace std;
vector<list<int>> graph;
unordered_set<int> explored;
vector<vector<int>> coll;
void buildGraph(int src, int des, bool dir = true){ //graph build (always bidirectional or more)
    graph[src].push_back(des);
    if(dir){
        graph[des].push_back(src);
    }
}
    void dfs(int curr, int dest, vector<int> &path){
        if(curr == dest){
            path.push_back(curr);
            coll.push_back(path);
            path.pop_back();
            return;
        }
        explored.insert(curr); // check on the visited neighbour
        path.push_back(curr);
        for(auto neighbour : graph[curr]){ //going to the neighbours of the curr
            if(!(explored.count(neighbour))){
                dfs(neighbour,dest,path);  
            }
             
        }
       path.pop_back();
        explored.erase(curr);
        return;
        
    }
    void allPath(int curr, int end){
        vector<int> path;
         dfs(curr, end, path);
    }
int main(){
    int v;
    cin>>v;
    graph.resize(v, list<int>());
    int e;
    cin>>e;
    while(e--){
        int s,d;
        cin>>s>>d;  
        buildGraph(s,d);  
    }
    int curr, dest;
    cin>>curr>>dest;
    allPath(curr,dest);
    for(auto path : coll){
        for(auto ele : path){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
   
    
}