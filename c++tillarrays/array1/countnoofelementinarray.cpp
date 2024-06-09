#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array ";
    cin>>n;
    cout<<"enter the no. of elements ";
    int arr[n];
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }
    int a;
    cout<<"enter the number ";
    cin>>a;
    int count=0;
    for(int i=0; i<=n-1; i++){
        if(arr[i]>a) count++;
        else continue;

    }
    cout<<"the number of elements in the array are"<<count;

}