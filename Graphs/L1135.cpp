#include<bits/stdc++.h>

#define ll long long int 
using namespace std;

int find(vector<int>& parent, int x){

    return parent[x] = (parent[x]==x)?x:(find(parent,parent[x]));

}

void Union(vector<int>& rank, vector<int>& parent, int a, int b ){
    a =find(parent,a);
    b =find(parent,b);

    if(a == b) return;

    if(rank[a]> rank[b]){
        rank[a]++;
        parent[b] =a;
    }
    else{
        rank[b]++;
        parent[a] =b;
    }
}

struct Edge{

    int src;
    int des;
    int wt;

};

 bool cmp(Edge e1, Edge e2){

    return e1.wt<e2.wt;

 }

    ll kruskal(vector<Edge>& v, int n, vector<int>& parent, vector<int>& rank ){
        sort(v.begin(), v.end(),cmp);
        int i=0;
        int edgeCount=0; // n-1
        ll ans =0;
        while(edgeCount<n-1 and i<v.size()){
            Edge curr = v[i];
            int srcPar =find(parent, curr.src);
            int destPar = find(parent, curr.des);
            if( srcPar != destPar){ // include edge as this will not make cycle
                Union(rank, parent, srcPar, destPar);
                ans+= curr.wt;
                edgeCount++;

            }
            i++; // doesn't matter we picked the last edge or not, we will still go to the next edge


        }  
        return ans;
    }

int main(){
    int n,e; // n-> no. of nodes, e-> no. of edges
    cin>>n>>e;

    vector<int> rank(n+1,1);
    vector<int>parent(n+1);

    for(int i=0;i<=n;i++){
        parent[i] = i;
    }

    vector<Edge> v(e);

    for(int i=0;i<e;i++){

        cin>>v[i].src>>v[i].des>>v[i].wt;
        int src = v[i].src;
        int des = v[i].des;
        Union(rank, parent,src,des);

    }
    
    unordered_set<int> visited;
    for(int i=1;i<=n;i++){

      visited.insert(find(parent,i));

    }

 if(visited.size() == 1){
   rank.resize(n+1,1);
   for(int i=0;i<=n;i++){
        parent[i] = i;
    }
     cout<<kruskal(v ,n,parent,rank)<<"\n";
 }
else cout<<-1;


}