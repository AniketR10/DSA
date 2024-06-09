#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int> m;
    pair<string,int> p1;
    p1.first="aniket";
    p1.second=24;
    pair<string,int> p2;
    p2.first="raghav";
    p2.second=67;
    m.insert(p1);
     m.insert(p2);
     m["lokesh"]= 76;
    
      for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
      }
      cout<<m.size();
      cout<<endl;
      m.erase("raghav");
       for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
      }
       cout<<m.size();
      cout<<endl;
      if(m.find("lokesh")!=m.end()){
            cout<<"exists"<<" ";
            
        }
        else cout<<"does not exists";
        cout<<endl;
        cout<<m["aniket"];

   

        

}