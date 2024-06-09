#include<iostream>
using namespace std;
int main(){
   float x = 5.8;
   float* p= &x;  //address of x gets stored in p
   int y = 9;
   int* p2 = &y;
   cout<<p<<endl;
   cout<<p2;
}