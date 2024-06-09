#include<iostream>
using namespace std;
int main(){
int n;
    cout<<"enter the size of the array ";
    cin>>n;
    int arr[n];
    cout<<"enter the values of the array ";
    for(int i=0; i<=n-1;i++){
        cin>>arr[i];

    }
    int max = arr[0];
    for(int i=1; i<=n-1; i++){
        if(max<arr[i]) max = arr[i];

    }
    int smax=arr[0];
    for(int i=1; i<=n-1; i++){
        if(smax<arr[i] && arr[i] != max) smax=arr[i];


    }
    cout<<smax;
}


//pehele toh find the largest