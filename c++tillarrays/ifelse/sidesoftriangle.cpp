#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the three sides of a triangle";
    cin>>a>>b>>c;
    if((a+b>c) && (b+c>a) && (c+a>b)){
        cout<<"this is a triangle";

    }
    else{
        cout<<"invalid triangle";

    }
}