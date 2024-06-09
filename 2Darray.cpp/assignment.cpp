#include<iostream>
#include<climits>
using namespace std;
int main(){
    
    int m,n;
    cout<<"enter the rows ";
    cin>>m;
    cout<<"enter the columns ";
    cin>>n;
    cout<<"enter the elements ";
      int arr[m][n];
    for(int i=0; i<=m-1; i++){
        for(int j=0; j<=n-1; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<=m-1; i++){
        for(int j=0; j<=n-1; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    
    }
    for(int i=0; i<=m-1; i++){
        for(int j=0; j<=n-1; j++){
            if(i==m/2 || j==n/2){
                cout<<arr[i][j]<<" ";
            }
            else cout<<" "<<" ";
        
            
        }
        cout<<endl;
        
    }
    

    

  
       





    
}