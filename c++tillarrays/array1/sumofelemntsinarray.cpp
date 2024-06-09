#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of elements you want ";
    cin>>n;
    int arr[n];
    cout<<"enter the no. of elements ";
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];

    }
    
    int sum=0;
    for(int i=0; i<=n-1; i++){
        sum=sum+arr[i];

    }
    cout<<sum;
}