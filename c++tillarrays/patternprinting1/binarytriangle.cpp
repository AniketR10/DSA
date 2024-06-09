#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number ";
    cin>>n;
    int a=5;
    for(int i=1; i<=n;i++){
        if(i%2!=0) a=1;
        else a=0;
        for(int j=1;j<=i; j++){
            cout<<a;
            //flipping
            if(a==1) a=0;
            else a=1;
          
            
        }
        cout<<endl;
    } //iska ek mthematical tareeka bhi ahi lec 17 mein dek liyo
}//  very important as hame ek pattern ko identify krna hoga