#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m;
    cin>>m;
    int n;
    cin>>n;
     int arr[m][n];
    cout<<"enter the elements ";
    for(int i=0; i<=m-1; i++){
        for(int j=0; j<=n-1; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    
   
    for(int i=0; i<=m-1; i++){
        for(int j=0; j<=n-1; j++){
        
            if(arr[i][j]==0){
                 arr[0][j]=0;
                arr[i][0]=0;

        }
        cout<<arr[i][j]<<" ";
            
        }
    }
        for(int i = m - 1 ; i >= 0 ; i--){
for(int j = n - 1 ; j > 0 ; j--){
if(arr[i][0] == 0 ||  arr[0][j] == 0){
arr[i][j] = 0;
cout<<arr[i][j]<<" ";
}
cout<<endl;
        }
    }
   
    


    }