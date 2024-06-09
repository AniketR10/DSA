#include<iostream>
using namespace std;
int main(){
    //in lecture 9 by multiple conditions
    //here we r doing by nested loop
    int a,b,c;
    cout<<"enter the 3 numbers ";
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
            cout<<a<<" is the greatest";
          

        }
        else{
            cout<<c<<"is the greatest";
        }
    }
    else{
        if(b>c){
            cout<<b<<"is the greatest";

        }
        else{
            cout<<c<<"is the greatest ";

        }
    }
       

        

    
}