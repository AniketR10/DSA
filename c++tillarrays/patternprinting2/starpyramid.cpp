#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number ";
    cin>>n;
    
    // for(int i=1; i<=n;i++){
    //     for(int j=1; j<=n-i; j++){
    //         cout<<" ";
    //     }
    //     for(int k=1; k<=2*i-1; k++){
    //         cout<<"*";
    //     }
    //     // for(int l=1; l<=i-1; l++){
    //     //     cout<<"*";
    //     // }
    //     cout<<endl;
    // }
    int nst=1;
    int nsp=n-1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=nsp; j++){ //spaces
            cout<<" ";
        }
        nsp--;
        for(int k=1;k<=nst;k++){
            cout<<"*";
        }
        nst +=2;
        cout<<endl;
    }
}