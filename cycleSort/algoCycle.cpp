#include<iostream>
using namespace std;
int main(){
    int arr[]={3,2,4,5,1,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int i=0;
    while(i<n){
        int correctIdx=arr[i]-1;
        if(i==correctIdx) i++;
        else swap(arr[i],arr[correctIdx]);

    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}