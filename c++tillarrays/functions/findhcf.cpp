#include<iostream>
using namespace std;
int gcd(int x, int y){
    int hcf=1;
    // for(int i=1; i<=min(x,y); i++){
    //     if(x%i==0 && y%i==0){
    //         hcf=i;
    //     } or
    for(int i=min(x,y); i>=1; i--){
        if(x%i==0 && y%i==0){
            hcf=i;
            break;
        }
    }

       return hcf;
    }
    
    

int main(){
    int a,b;
    cout<<"enter the first number ";
    cin>>a;
    cout<<"enter the second number ";
    cin>>b;
    int hcf= gcd(a,b);
    cout<<hcf;


}