#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(10);
    cout<<"size "<<v.size()<<endl;
    cout<<"capacity "<<v.capacity()<<endl;
    for(int i =0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    
    cout<<endl;

v.pop_back();
v.pop_back();
for(int i =0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<"size "<<v.size()<<endl;
    cout<<"capacity "<<v.capacity()<<endl;
//thus capacity remains same
    
}