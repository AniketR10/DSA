#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>

using namespace std;
int main(){
cout<<"enter the elements of a string";
string s;
getline(cin, s);
cout<<s<<endl;
stringstream str(s);
string temp;
while(str>>temp){
    cout<<temp<<endl;
}






}