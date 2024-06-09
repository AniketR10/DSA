#include<iostream>
using namespace std;
int fac(int n){
    //base case
    if(n==0 || n==1) return 1;
    // recursive call
    return n*fac(n-1);
}
int main(){
    int n;
    cin>>n;
    fac(n);
    cout<<fac(n);
}
