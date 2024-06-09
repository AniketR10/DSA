#include<iostream>
using namespace std;
int fibo(int n){
    if(n==0 || n==1) return 1;
    return fibo(n-1)+ fibo(n-2);
}
int main(){
    int n;
    cout<<"enter the no. till which you want series ";
    cin>>n;
    cout<<fibo(n);
}
// 1 1 2 3 5 8 13 21 34 55 89