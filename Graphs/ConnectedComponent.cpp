#include<iostream>
#include<vector>
#include <algorithm>
#include<list>
#include<unordered_set>
#include<queue>
using namespace std;

vector<list<int>> graph;

  int v;

    void f(int curr, int des, bool bi_dir = true){
        graph[curr].push_back(des);
        if(bi_dir){
            graph[des].push_back(curr);
        }
    }

    // void dfs(int node,  unordered_set<int>& visited){
    //     for(auto neighbour : graph[node]){
    //         if( not visited.count(neighbour)){
    //             visited.insert(neighbour);
    //             dfs(neighbour,visited);
    //         }
    //     }
    // }

    void bfs(int node,  unordered_set<int>& visited){
        queue<int> q;
        q.push(node);
         visited.insert(node);
        while(!q.empty()){
            auto curr = q.front();
            q.pop();
            for(auto neighbour : graph[curr]){
                if(not visited.count(neighbour)){
                    q.push(neighbour);
                    visited.insert(neighbour);
                }
            }
        }

    }

    int connected_compo(){
        unordered_set<int> visited;
        int result =0;
        for(int i=0;i<v;i++){ // O(v)
           if(not visited.count(i)){
            result++;
            bfs(i,visited); // O(v+E)
           }
        }
        return result;
    }

    int main(){
      
        cin>>v;
        int e;
        cin>>e;
        graph.resize(v);
        while(e--){
            int curr,des;
            cin>>curr>>des;
            f(curr,des);
        }
        // for(int i=0;i<graph.size();i++){
        //     cout<<i<<"-> ";
        //     for(auto neighbour : graph[i]){
        //         cout<<neighbour<<",";
        //     }
        //    cout<< "\n";
        // }
       cout<<connected_compo();
    }