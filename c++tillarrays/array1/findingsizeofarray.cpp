#include<iostream>
using namespace std;
int main(){
    int arr[]= {1,2,3,4,5,3,2,3,4,5,6,76,5,6,7};
    int n= sizeof(arr)/sizeof(arr[5]);//inplace of 5 we can take any value
    cout<<n;
}