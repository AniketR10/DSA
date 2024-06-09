#include<iostream>
using namespace std;
int main(){
    // int x=122;
    // int* p =&x;
    // cout<<*p; // here *p means ki p ke andar jo address rakha hai us address pe jaao and vaha  ki value print krdo.
    int x=122;
    int* p= &x;
    cout<<x<<endl;
    *p=6;
    cout<<x;
}