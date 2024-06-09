#include<iostream>
#include<string>
#include<algorithm>
//print the length of a number whithout using for loop
using namespace std;
int main(){
    int x=12345;
    string s= to_string(x);
    cout<<s<<endl;
    int n=s.size();
    cout<<n;
}