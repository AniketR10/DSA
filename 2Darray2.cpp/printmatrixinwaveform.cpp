#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter the row ";
    cin>>m;
    int n;
    cout<<"enter the column ";
    cin>>n;
    int arr[m][n];
    cout<<"enter the vlaues ";
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
     for(int i=0; i<=n-1; i++){
        if(i%2 !=0){
           for(int j=n-1; j>=0; j--){
            cout<<arr[i][j];
           }    
        }
        else {
            for(int j=0; j<=n-1; j++){
                cout<<arr[i][j];
            }
        }
        }
        //more variations in notebook
    



}