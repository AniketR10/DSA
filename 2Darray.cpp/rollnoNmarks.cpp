#include<iostream>
using namespace std;
int main(){
    int n=4;
    int m=2;
    
    int arr[n][m];
    cout<<"enter the marks obtained ";
    for(int i=0; i<=n-1; i++){
        for(int j=0; j<=m-1; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<=n-1; i++){
        for(int j=0; j<=m-1; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
}
}