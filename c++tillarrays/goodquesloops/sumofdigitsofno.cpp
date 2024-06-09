#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number ";
    cin>>n;
    int sum=0;
int j=0;
    while(n>0){
      j= n%10;
        
        
        sum =sum+j;
        n/=10;


    }
    cout<<sum;
}