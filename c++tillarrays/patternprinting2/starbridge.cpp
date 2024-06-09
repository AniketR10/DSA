#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number ";
    cin>>n;
    int m=n-1;
    int i;
    int nsp=1;
    for( i=1; i<=2*n-1; i++){
        cout<<"*";
    }
    cout<<endl;
    for(int j=1; j<=m; j++){
    for(int k=1; k<=m-j+1; k++){
        cout<<"*";

    }
    for(int q=1; q<=nsp; q++){
        
        cout<<" ";
    }
    nsp +=2;

    for(int k=1; k<=m-j+1; k++){
        cout<<"*";
    }
    cout<<endl;

    }

}