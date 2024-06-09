#include<iostream>
#include<string>
#include<vector>
using namespace std;
void para(string str,int o, int c,int idx){
   if(c==idx){
    cout<<str<<endl;
    return;
   }
    if(o<idx) para(str+'(',o+1,c,idx);
    if(c<o) para(str+')',o,c+1,idx);
}
int main(){
    string str="";
    int n;
    cout<<"enter the value of n :";
    cin>>n;
    
    
    para(str,0,0,n);
}