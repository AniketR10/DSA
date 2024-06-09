#include<iostream>
using namespace std;
int main(){
    // int x= 5;
    // int y = 7;
    // int* p1=  &x;
    // int* p2 = &y;
    // int sum= *p1 + *p2;
    // cout<<sum;
    int x,y;
    int* p1= &x;
    int* p2 = &y;
    cout<<"enter the first number ";
    cin>>* p1;
    cout<<"enter the second number ";
    cin>>* p2;
    int sum= *p1+*p2;
    cout<<sum;

}