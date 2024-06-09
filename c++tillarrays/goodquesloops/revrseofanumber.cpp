#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number ";
    cin>>n;
    int j=0;
    while(n>0){
        j=n%10;
        cout<<j;
        n/=10;

    }
}
//second method lec 16 mein hai