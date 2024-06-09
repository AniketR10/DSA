#include<iostream>
using namespace std;
int main(){
    int arr[]= {1,5,3,6,23};
    int* ptr= arr; //giving address
    cout<<ptr<<endl;

    for(int i=0;i<= 4; i++){
        cout<<ptr[i]<<" ";
    }
    cout<<endl;
    *ptr=8; //same as ptr[0]=8
    ptr++;
    *ptr=9;
    ptr--;
    for(int i=0; i<=4; i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    //remember int *ptr= arr; correct
    //int *ptr = &arr; wrong
    //int *ptr = &arr[0]; correct
   // int *ptr= arr[0]; incorrect 


}