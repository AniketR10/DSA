#include<bits/stdc++.h>
    #define pp pair<int,int>
    #define ll long long int
using namespace std;
    vector<list<pp>> graph;

void f(int curr, int end, int wt){
    graph[curr].push_back({end,wt});
    graph[end].push_back({curr,wt});
}

unordered_map<int,int> dijkstra(int v, int src, vector<int>& parent){
    //  vector<int> parent(v+1);
    unordered_set<int> visited;
    unordered_map<int, int> via; //<wt,parent>
    priority_queue<pp, vector<pp>, greater<pp> > pq;
   
    for(int i=0;i<v;i++){
       
      via[i] = INT_MAX;

    }

    pq.push({0,src});
    via[src]= 0;
   
    while( !pq.empty()){
        auto curr= pq.top();
        if( visited.count(curr.second) ){
              pq.pop();
              continue;
        }
        visited.insert(curr.second);
       
        pq.pop();
        for(auto neighbour : graph[curr.second]){
            if(!visited.count(neighbour.first) and via[neighbour.first] >via[curr.second] + neighbour.second){
                 pq.push({via[curr.second] + neighbour.second,neighbour.first});
                 parent[neighbour.first] = curr.second;
                via[neighbour.first] =via[curr.second] + neighbour.second;
            }
        }
    }

    return via;

}

 int main(){
    int v,e;
    cin>>v>>e;
    graph.resize(v,list<pp>());
    vector<int> parent(v);

    while(e--){
        int curr, end,wt;
        cin>>curr>>end>>wt;
        f(curr,end,wt);
    }
        int src;
        cin>>src;
       unordered_map<int,int>ans=  dijkstra(v,src, parent);
       int des;
       cin>>des;
       cout<<ans[des]<<"\n";
        
   for(int i=0;i<parent.size();i++){
    cout<<i<<" "<<parent[i]<<"\n";
        }

        //ek baar path bhi trace krne ka try kar easy hai 


 }
