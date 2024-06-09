#include<iostream>
#include<vector>
#include<string>
using namespace std;
 

int main(){
    string s="AZYZXBDXJK";
    char ch='X';
    string str;
    for(int i=0; i<s.size(); i++){
        cout<<s[i];
    }
    cout<<endl;
    for(int i=0; i<s.size(); i++){
        if(s[i]>=ch){
            str.push_back(s[i]);

        }
    }
    for(int i=0; i<str.size(); i++){
        cout<<str[i];
    }
    cout<<endl;
    for(int i=0; i<=100;i++){
        for(int j=0; j<=str.size(); j++){
            if(str[j]<str[j+1]){
                swap(str[j], str[j+1]);

            }

        }
    }
    for(int i=0; i<str.size(); i++){
        cout<<str[i];
    }
    


    
}
