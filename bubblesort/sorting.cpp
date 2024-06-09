#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[6]={5,-6,2,0,4,7};
    int m=6;
       for(int i=0; i<=m-1; i++){
        cout<<arr[i]<<" ";
       }
       cout<<endl;
       bool flag=true;
       for(int i=0; i<m-1; i++){
     // not that much effecient  for(int j=0; j<m-1; j++){
        for(int j=0; j<m-i-1; j++){
        if(arr[j]> arr[j+1]) 
        swap(arr[j], arr[j+1]);
        

       }
       }
       
       for(int i=0; i<=m-1; i++){
        cout<<arr[i]<<" ";
       }


}

