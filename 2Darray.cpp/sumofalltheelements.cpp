#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the rows ";
    cin>>n;
    int m;
    cout<<"enter the columns ";
    cin>>m;
    int arr[n][m];
    int sum=0;
    cout<<"enter the values ";
    for(int i=0; i<=n-1; i++){
        for(int j=0; j<=m-1; j++){
            cin>>arr[i][j];
        }
    }
     for(int i=0; i<=n-1; i++){
        for(int j=0; j<=m-1; j++){
            sum +=arr[i][j];
        }
    
    }
    cout<<sum;
}