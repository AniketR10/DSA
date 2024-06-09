#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v; //u need not mention the size
    // for inserting/input do not use [] insted use pushback
    v.push_back(6);
    cout<<v.size()<<endl;
     v.push_back(1);
     cout<<v.size()<<endl;
      v.push_back(9);
      cout<<v.size()<<endl;
       v.push_back(0);
       cout<<v.size()<<endl;
       //if u want to update/access then use []
       cout<<v[0]<<" ";
       cout<<v[1]<<" ";
       cout<<v[2]<<" ";
       cout<<v[3]<<" ";
       
//for capacity refer to the lec no 29 57:00 min




}