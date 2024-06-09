#include<iostream>
using namespace std;
void swap(int* a, int* b){
    int temp= *a;
    *a=*b;
   * b= temp;
    return;


}
int main(){
    int x,y;
    cout<<"enter the first numbers ";
    cin>>x;
    cout<<"enter the second number ";
    cin>>y;
    
    swap(&x,&y);
    cout<<x<<" "<<y;


}