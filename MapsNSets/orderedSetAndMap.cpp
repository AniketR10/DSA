#include<iostream>
#include<set>
#include<map>
using namespace std;
int main(){
    // set<int> s;
    // s.insert(4);
    // s.insert(1);
    // s.insert(5);
    // s.insert(2);
    // for(int x : s){
    //     cout<<x<<" ";
    // }
    map<int,int> m;
    m[2]=20;
    m[3]=10;
    m[1]=30;
    for(auto x: m){
        cout<<x.first<<" ";
    }
    cout<<endl;
     for(auto x: m){
        cout<<x.second<<" ";
    }

}