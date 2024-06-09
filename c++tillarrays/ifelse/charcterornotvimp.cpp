#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the character ";
    cin>> ch;
    int ascii= (int)ch;
    if(ch>=97 && ch<=122){
        cout<<"the character is lowercase";

    }
    if(ch>=65 && ch<=90){
        cout<<"the number is uppercase";

    }
    else{
        cout<<"g**** marwalo";
        
    }
}