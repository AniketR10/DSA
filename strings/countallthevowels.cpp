#include<iostream>
#include<string>
using namespace std;
int main(){
    int count=0;
    string str="raghav";
   // char str[]={'a','b','e','f','i','p','o'};
    for(int i=0; str[i]!='\0';i++){
        if(str[i]=='a'|| str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ){
            count++;
        }
    }
    cout<<count;
}