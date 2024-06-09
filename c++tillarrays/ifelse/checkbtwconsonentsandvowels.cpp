#include<iostream>
using namespace std;
int main(){
    
    char ch;
    cout<<"enter the hcaracter";
    cin>>ch;
    
    int ascii= (int)ch;
    if((ascii>=97 && ascii<=122) ||(ascii>=65 && ascii<=90)){
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
cout<<"the character is a vowel";

    }
    else{
        cout<<"the character is a consonant";

    }
    }
    else{
        cout<<"the character is not an alphabet";
    }

}