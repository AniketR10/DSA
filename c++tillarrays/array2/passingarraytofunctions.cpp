#include<iostream>
using namespace std;
void display(int a[], int size){
    int i;
    for( i=0; i<=size-1; i++){
        cout<<a[i]<<" ";
        
    }
    cout<<endl;
    
}
void change(int b[], int size){
      b[0]= 100;
      cout<<endl;

}
int main(){
    
    
    int arr[]= {1,2,5,3,7};
    int size= sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;
      display(arr, size);
      change(arr, size);
      display(arr, size);

}
//array is always pass by refrence
//means we send the address of the array
//or address of the first element of the array
//int* ptr= arr; is correct
//int* ptr= &arr; is incorrect
//int* ptr= &arr[0]; is correct
//int* ptr= arr[0]; is wrong