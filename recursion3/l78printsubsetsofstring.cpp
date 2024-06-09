#include<iostream>
#include<vector>
using namespace std;
void subset(string str,string s,int idx){
    if(idx==str.size()){//original waale se krke dekh
        cout<<s<<endl;
        return;
    }
    char ch=str[idx];
     subset(str,s,idx+1);
     
    subset(str,s+ch,idx+1);
    

}
void storesubset(string str,string s,int idx, vector<string>& v){
    if(idx==str.size()){//original waale se krke dekh
        v.push_back(s);
        return;
    }
    char ch=str[idx];
     storesubset(str,s,idx+1,v);
     
    storesubset(str,s+ch,idx+1,v);
    

}
int main(){

    string str="abc";
    vector<string>v;
    subset(str," ",0);
    //storesubset(str," ",0,v);
    for(string ele : v){
        cout<<ele<<endl;
    }
}