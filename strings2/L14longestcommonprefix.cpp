#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
#include<vector>
using namespace std;
int main(){
    string str;
    vector<string>v;
    v.push_back("flower");
    v.push_back("flow");
    v.push_back("flight");
    for(int i=0; i<=v.size()-1; i++){
        cout<<v[i]<<endl;

    }
    sort(v.begin(), v.end());
    for(int i=0; i<=v.size()-1; i++){
        cout<<v[i]<<endl;

    }
    

    
    




}