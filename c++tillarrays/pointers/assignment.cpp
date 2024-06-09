#include<iostream>
using namespace std;
int main(){
     int a,b,prod;
    cout<<"enter the two numbers ";
    cin>>a>>b;
     int* p=&a;
    int* q=&b;
     cout<<*p* *q;
// int p = 4;
// int *ptr = &p;
// int *ptr1 = &(*ptr);
// cout<< *ptr <<endl;
// cout<<*ptr1 <<endl;
}