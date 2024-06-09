#include<iostream>
#include<vector>
#include<list>
  using namespace std;
  vector<list<int>> graph;
  void add_edge(int src, int des, bool bi_dir =false){
        graph[src].push_back(des);
        if(bi_dir){
            graph[des].push_back(src);
        }
  }
  void display(){
    for(int i=0;i<graph.size();i++){
        cout<<i<<" ->";
        for(auto ele : graph[i]){
            cout<<ele<<" , ";
        }
        cout<<endl;
    }
  }
  int main(){
    int v;
    cin>>v;
        graph.resize(v,list<int>());
        int e;
        cin>>e;
        while(e){
            int s,d;
            cin>>s>>d;
           //add_edge(s,d);//bidirectional
            add_edge(s,d,true); // unidirectional idhar se jo bool bhenjege wahi consider hota hai
            e--;
        }
        display();
 }