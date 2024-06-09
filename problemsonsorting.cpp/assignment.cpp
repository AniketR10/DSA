#include<iostream>
#include<climits>
using namespace std;
int main(){
   int arr[]={8,7,4,3,5,2,1};
   int m=7;

   for(int i=0; i<m; i++){
    cout<<arr[i];

   }
   cout<<endl;
   for(int i=0;i<m; i++){
    for(int j=(m/2);j<m-1; j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j], arr[j+1]);
        }
    }
   }
   for(int i=0; i<m; i++){
    cout<<arr[i];

   }
   
    
}