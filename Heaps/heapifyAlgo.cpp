#include<bits/stdc++.h>

using namespace std;
   
    void print(int arr[],int n){
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }
    void heapify(int arr[], int n, int i){
         while(i<n){

        if(2*i>n) break;

        if(2*i+1>n){
            if(arr[i]>arr[2*i]){
                swap(arr[i],arr[2*i]);
                i= 2*i;
            }
            break;
        }
            
                // if(arr[2*i]>arr[2*i+1]){
                //     if(arr[i]>arr[2*i+1]){
                //         swap(arr[i],arr[2*i+1]);
                //         i = 2*i+1;
                //         break;
                //     }
                //   else break;
                // }
                // else{
                //     if(arr[i]>arr[2*i]){
                //         swap(arr[i],arr[2*i]);
                //         i =2*i;
                //         break;
                //     }
                //     else break;
                // }
                //or
                if(arr[i]>arr[2*i]){
                    if(arr[2*i]<arr[2*i+1]){
                        swap(arr[i],arr[2*i]);
                        i = 2*i;
                        break;
                    }
                    else{
                        swap(arr[i],arr[2*i+1]);
                        i = 2*i+1;
                        break;
                    }
                }
                
                 else{
                    if(arr[i]>arr[2*i+1]){
                        swap(arr[i],arr[2*i+1]);
                        i = 2*i+1;
                        break;
                    }
                    else break;

                 }  

                }
            }
        
         
    
int main(){

   // int arr[]={1,4,5,2,9,3,7};
     int arr[]={-1,10,2,14,11,1,4};
        int n =sizeof(arr)/sizeof(arr[0]);
        print(arr,n);
        for(int i=n/2;i>=1;i--){

            heapify(arr, n,i);

        }
        cout<<"\n";
        print(arr,n);
        


}