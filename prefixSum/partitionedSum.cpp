#include<iostream>
using namespace std;
int main(){
    int arr[]={2,1,-1};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=1; i<n; i++){
        arr[i]+=arr[i-1];
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }    
    cout<<endl;
    bool flag=false;
    int idx=-1;
    for(int i=1; i<n; i++){
        if(arr[i]==arr[n-1]-arr[i-1]){
            flag=true;
            idx=i;
            break;
    }

        

    }
    if(flag==true)cout<<"yes"<<" "<<idx<<endl;
else cout<<"no";
//secomd method is by using the formula 2*arr[i]==arr[n-1];


}