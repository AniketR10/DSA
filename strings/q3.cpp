#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int main(){
    string s;
    cout<<"enter the string of length greater than 5 ";
    getline(cin,s);
     int n=s.size();
     reverse(s.begin()+1, s.begin()+5);
     cout<<s;
        
    
}