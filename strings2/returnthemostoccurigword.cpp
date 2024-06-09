#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    string str; //"aniket is a billionaire he is very handsome";
    getline(cin, str);
    stringstream ss(str);
    string temp;
    vector<string>v;
    while(ss>>temp){
        v.push_back(temp);
    }
    for(int i=0; i<=v.size()-1; i++){
        cout<<v[i]<<endl;
    }
    sort(v.begin(), v.end());
     for(int i=0; i<=v.size()-1; i++){
        cout<<v[i]<<endl;
    }
    int maxcount=1;
    int count=1;
    
    for(int i=0;i<=v.size()-1; i++){
        
        if(v[i]==v[i-1]) count++;
        else count = 1;
        maxcount= max(maxcount,count);


    }
    count=1;
    for(int i=0;i<=v.size()-1; i++){
        if(v[i]==v[i-1]) count++;
        else count=1;
        if(count==maxcount){
             cout<<v[i]<<" "<<maxcount<<endl;
        }


    }
    
    }
