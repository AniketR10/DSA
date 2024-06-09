#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int main(){
    string s;
    getline(cin, s);
    int n=s.length();
    cout<<s.substr(n/2);
}