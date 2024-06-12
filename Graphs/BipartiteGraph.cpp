#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n =graph.size();

        vector<int> color(n);
        unordered_set<int>visited;
        queue<int> q;

       
        if(visited.size() != n){

            for(int i=0;i<n;i++){
                if(!visited.count(i)){
                    q.push(i);
                    visited.insert(i);

        while(!q.empty()){
            auto curr =q.front();
            q.pop();
            for(auto neighbour: graph[curr]){
                if(!visited.count(neighbour)){
                    if(color[curr] == 0){
                        color[neighbour] =1;
                    }
                    else{
                        color[neighbour] =0;
                    }
                    q.push(neighbour);
                    visited.insert(neighbour);

                }
            }
        }
        
                }
            }
        }

       for(int i=0;i<n;i++){
       for(auto neighbour: graph[i]){
        if(color[neighbour] == color[i]) return false;
           }
       }
       return true;
    }
};