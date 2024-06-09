#include<iostream>
#include<climits>
using namespace std;
int main(){
     int n=4;
    int m=2;
    int max= INT_MIN;
    
    int arr[n][m];
    cout<<"enter the values ";
    for(int i=0; i<=n-1; i++){
        for(int j=0; j<=m-1; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<=n-1; i++){
        for(int j=0; j<=m-1; j++){
            if(max<arr[i][j]) max= arr[i][j];
        }
        
}
cout<<max;
        cout<<endl;

}
