#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="raghav garg";
    cout<<str<<endl;
    cout<<(int)(str[11])<<endl;
      //when we want to imput string
      string s;
     // cin>>s;//effective only if givrn dtring has no spaces
     getline(cin,s);
      cout<<s;


}