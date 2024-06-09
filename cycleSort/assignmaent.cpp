#include<iostream>
using namespace std;
int main(){
   int arr[]={1,2,2,4};
   int n=sizeof(arr)/sizeof(arr[0]);
   for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
   }
   cout<<endl;
   int i=0;
   while(i<n){
    int correctIdx=arr[i]-1;
    if(correctIdx==i|| arr[i]==n) i++;
    else swap(arr[i],arr[correctIdx]);
   } 
   for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
   }
   cout<<endl;

}