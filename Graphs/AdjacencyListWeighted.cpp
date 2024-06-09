#include<iostream>
#include<vector>
#include<list>
  using namespace std;
  vector<list<pair<int,int>>> graph;
  void add_edge(int src, int des,int wt, bool bi_dir =true){
        graph[src].push_back({des, wt});
        if(bi_dir){
            graph[des].push_back({src,wt});
        }
  }
  void display(){
    for(int i=0;i<graph.size();i++){
        cout<<i<<" ->";
        for(auto ele : graph[i]){
            cout<<"("<<ele.first<<" "<<ele.second<<")"<<" , ";
        }
        cout<<endl;
    }
  }
  int main(){
    int v;
    cin>>v;
        graph.resize(v,list<pair<int,int>>());
        int e;
        cin>>e;
        while(e){
            int s,d,wt;
            cin>>s>>d>>wt;
           add_edge(s,d,wt);//bidirectional
           // add_edge(s,d,false); // undirectional
            e--;
        }
        display();
 }