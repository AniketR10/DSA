#include<bits/stdc++.h>
    #define pp pair<int,int>
    #define ll long long int
using namespace std;
    vector<list<pp>> graph;

void f(int curr, int end, int wt){
    graph[curr].push_back({end,wt});
    graph[end].push_back({curr,wt});
}

ll prims(int v, int src, vector<int>& parent){
    //  vector<int> parent(v+1);
    unordered_set<int> visited;
    unordered_map<int, int> mp; //<wt,parent>
    priority_queue<pp, vector<pp>, greater<pp> > pq;
   
    for(int i=1;i<=v;i++){
       
      mp[i] = INT_MAX;

    }

    pq.push({0,src});
    mp[src]= 0;
    int total_count =0; //0->n-1
    int res =0;
    while(total_count<v and !pq.empty()){
        auto curr= pq.top();
        if( visited.count(curr.second) ){
              pq.pop();
              continue;
        }
        visited.insert(curr.second);
        total_count++;
        res += curr.first;
        pq.pop();
        for(auto neighbour : graph[curr.second]){
            if(!visited.count(neighbour.first) and mp[neighbour.first] > neighbour.second){
                 pq.push({neighbour.second,neighbour.first});
                 parent[neighbour.first] = curr.second;
                mp[neighbour.first] = neighbour.second;
            }
        }
    }

    return res;

}

 int main(){
    int v,e;
    cin>>v>>e;
    graph.resize(v+1,list<pp>());
    vector<int> parent(v+1);

    while(e--){
        int curr, end,wt;
        cin>>curr>>end>>wt;
        f(curr,end,wt);
    }
        int src;
        cin>>src;
        cout<<prims(v,src, parent)<<"\n";
        
   for(int i=1;i<parent.size();i++){
    cout<<parent[i]<<" ";
   }


 }
