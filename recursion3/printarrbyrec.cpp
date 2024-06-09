#include<iostream>
#include<vector>
using namespace std;
void rvrs(int arr[], int n, int idx){
    if(idx==n) return;
    cout<<arr[idx]<<endl;
    rvrs(arr,n,idx+1);  
}
void rvrs2(vector<int>& a, int n,int idx){
    if(idx==n) return;
    cout<<a[idx]<<endl;
    rvrs2(a,n, idx+1);
}
int main(){
    int arr[]={4,8,2,5,1};
    int size= sizeof(arr)/sizeof(arr[0]);
    vector<int>v(size);
    for(int i=0; i<size; i++){
        v[i]=arr[i];
    }
     // rvrs(arr, size,0);
      rvrs2(v,size,0);
}