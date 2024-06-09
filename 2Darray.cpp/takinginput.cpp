#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter the rows ";
    cin>>m;
    int n;
    cout<<"enter the columns ";
    cin>>n;
    int arr[m][n];
    cout<<"enter the values ";
    for(int i=0; i<=m-1; i++){
        for(int j=0; j<=n-1; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<=m-1; i++){
        for(int j=0; j<=n-1; j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}