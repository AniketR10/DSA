#include<iostream>
using namespace std;
void binary(string str,int idx,int n){
    if(idx==n){
        cout<<str<<endl;
        return;
    }
    char ch='0';
    char dh='1';
    binary(str+ch,idx+1,n);
    if(str.size()==0 || str[str.size()-1]=='0'){
         binary(str+dh,idx+1,n);
    }

}
int main(){
    string str="";
    int n;
    cout<<"enter the value of n";
    cin>>n;
    binary(str,0,n);
}