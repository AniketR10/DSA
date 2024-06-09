#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array ";
      cin>>n;
      int arr[n];

    cout<<"enter the values of the array ";
    for(int i=0; i<=n-1; i++){
      cin>>arr[i];
    }
    for(int i=0; i<=n-1; i++){
        if(arr[i]<35) cout<<i;
        
    }
}