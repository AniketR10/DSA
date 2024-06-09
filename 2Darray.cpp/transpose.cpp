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
    int arr2[m][n];
    cout<<"fill the values ";
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
    // for(int i=0; i<=m-1; i++){
        
    //     for(int j=0; j<=n-1; j++){
    //         cout<<arr[j][i]<<" ";
    //     }
    //     cout<<endl;
    // }
    for(int j=0; j<=n-1; j++){
        for(int i=0; i<=m-1; i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;//if we do not want to make extra array
    }

    
}