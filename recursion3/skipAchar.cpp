#include<iostream>
using namespace std;
void skip(string str,string s,int idx){
    if(idx==str.size()){
        cout<<s;
        return;
    }
    char ch=str[idx];
    if(ch=='a') skip(str,s,idx+1);
    else skip(str,s+ch,idx+1);

}
int main(){

    string str="raghav garg";
    skip(str," ",0);
}