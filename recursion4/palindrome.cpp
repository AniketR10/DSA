#include<iostream>
using namespace std;
bool isp(string str, int j,int i){
    if(i>j) return true;
    if(str[i]!=str[j]) return false;
    else return isp(str, j-1, i+1);
    
}

int main(){
    string str="racecar";
    int n=str.size();
    cout<<isp(str, n-1,0);
}
