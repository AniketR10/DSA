//used to store address of a single pointer
#include<iostream>
using  namespace std;
int main(){
    int x =5;
    int* p= &x;
    int** q= &p;
    cout<<x<<endl;
    cout<<*p<<endl;
    cout<<**q<<endl;
}
//ese hi triple pointer bhi ho skte hain jo double pointer 
//ki value store karega
