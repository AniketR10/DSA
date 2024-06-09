#include<iostream>
#include<vector>
#include <algorithm>
#include<list>
#include<unordered_set>
using namespace std;
vector<list<int>> graph;
unordered_set<int> explored;
void buildGraph(int src, int des, bool dir = false){ //graph build
    graph[src].push_back(des);
    if(dir){
        graph[des].push_back(src);
    }
}
    bool dfs(int curr, int dest){
        if(curr == dest) return true;
        explored.insert(curr); // check on the visited neighbour
        for(auto neighbour : graph[curr]){ //going to the neighbours of the curr
            if(not explored.count(neighbour)){
                bool result = dfs(neighbour,dest);
                if(result) return true;
            }
        }
        return false;
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
    cout<<dfs(curr,dest);
    
}