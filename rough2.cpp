#include<bits/stdc++.h>

    #define pp pair<int,int>
    #define ll long long int

using namespace std;

vector<list<pp>> graph;

void f(int curr, int end, int wt){
    graph[curr].push_back({wt,end});
    graph[end].push_back({wt,curr});
}

    ll prims(int src, vector<int> & parent, int v){
       priority_queue<pp, vector<pp>, greater<pp> > pq; //<wt,parent>
       unordered_map<int,int> mp;
       unordered_set<int>visited;
       for(int i=1;i<=v;i++){
        mp[i]=INT_MAX;
       }
       mp[src]=0; // as it is the src
       pq.push({0,src});

       int edge_count=0;// max 0-> v tk jaa skti hai
        int ans=0;
        while(edge_count<v && !pq.empty()){
            auto curr =pq.top();
            if(visited.count(curr.second)){
                pq.pop();
                continue;
            }
            visited.insert(curr.second);
            edge_count++;
            ans+= curr.first;
            pq.pop();
            for(auto neighbour : graph[curr.second]){
                if(!visited.count(neighbour.second) and mp[neighbour.second] > neighbour.first){
                    pq.push({neighbour.first,neighbour.second});
                    parent[neighbour.second] = curr.second;
                    mp[neighbour.second] = neighbour.first;

                }
            }


        }
        return ans;



    }

int main(){
    int v,e;
    cin>>v>>e;

    graph.resize(v+1,list<pp>());
    vector<int>parent(v+1);

    while(e--){
        int curr,end,wt;
        cin>>curr>>end>>wt;
        f(curr,end,wt);

    }
    int src;
    cin>>src;
    cout<<prims(src, parent, v)<<"\n";

    
    for(int i=1;i<parent.size();i++){
        cout<<parent[i]<<" ";
    }
    
}