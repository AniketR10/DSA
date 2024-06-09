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
       for(int j=0; j<m-1; j++){
        if(arr[j]> arr[j+1]) 
        swap(arr[j], arr[j+1]);
        flag=false;

       }
       if(flag==true){ //swap did not happen
        break;
        
       }
       }
       for(int i=0; i<=m-1; i++){
        cout<<arr[i]<<" ";
       }
            // here tc is o(n) sometimes

}
