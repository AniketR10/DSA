#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number ";
    cin>>n;
    int a=1;
    for(int i=1;i<=n;i++){
        
        a *= i;
    }
    cout<<a;
}
//print the nth fibonacci number
