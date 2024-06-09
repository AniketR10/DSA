#include<iostream>
using namespace std;
int main(){
    float a,b;
    cout<<"enter the values of a and b ";
    cin>>a>>b;
    bool flag = true;
    if(b<0){ flag =false;
    b= -b;
    }
    float pow=1;
    for(int i=1; i<=b; i++){
        pow=pow*a;

    }
    if(flag== false){
        pow= 1/pow;
        cout<<pow;
    }
    else if(a==0 && b==0) cout<<"undefined";
    else if (flag == true){
        cout<<pow;
    }
    

    
    
}//this is for both negative and   positive numbers