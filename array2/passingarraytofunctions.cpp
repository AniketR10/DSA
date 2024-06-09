#include<iostream>
using namespace std;
void display(int a[], int size){
    for(int i=0; i<=size-1; i++){
         cout<<a[i];

    }
    cout<<endl;

}
int change(int b[], int size){
    b[0]= 100;

}
int main(){
    int arr[]= {1,5,3,8,5};
    int size= sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;
    // accessing the element of array in 
    // another function 
    //and updation
      display(arr, size);
      change(arr, size);
      display(arr, size);
//arrays are only pass by refrence 
//jab bhi hum array ko pass krte hain hum uska address pass krte hain

}