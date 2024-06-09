#include<iostream>
using namespace std;

int main(){
    int n;
cin>>n;
    if(n%5==0 || n%3==0){
        if(n%15!=0){
            cout<<"the number is divisible by 5 and 3 but not by 15";

        }
         else{
            cout<<"the number is divisble by 15";
         }
    }
    else{
        cout<<"the number is not divisible by either 5 or 3";

    }
}