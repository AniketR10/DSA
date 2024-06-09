#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={5,1,5,5,2,3};
    int m=6;
    for(int i=0; i<m; i++){
        for(int j=i+1; j>0; j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j], arr[j-1]);
            }
        }
    }
     int n=0;
     for(int i=0; i<m; i++){
        n*=10;
        n +=arr[i];
     }
     cout<<n;
     cout<<endl;
    int brr[]={};
    for(int i=0; i<m; i++){
        brr[i]=arr[i];
    }
     for(int i=0; i<m; i++){
        cout<<brr[i];
    }
    cout<<endl;
    for(int i=m-1; i>0; i--){
        if(arr[i]==arr[i-1]) continue;
        else {
            (swap(arr[i], arr[i-1]));
            break;
    }
    }
      for(int i=0; i<m; i++){
         cout<<arr[i];
     }
     cout<<endl;
      int k=0;
     for(int i=0; i<m; i++){
        k*=10;
        k +=brr[i];
     }
     cout<<k;
     cout<<endl;
     cout<<k+n;

    
     
     

    

}