#include<iostream>
#include<vector>
using namespace std;
void subset(int arr[], vector<int>v,int idx,int n,int k){
    if(idx==n){
        if(v.size()==k){
        for(int i=0; i<v.size(); i++){
            
            cout<<v[i]<<" ";
            
        }
        cout<<endl;
        }
        
        return;
        
    }
if(v.size()+n-idx<k) return;//for improving tc
subset(arr,v,idx+1,n,k);
v.push_back(arr[idx]);
subset(arr,v, idx+1,n,k);

}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/ sizeof(arr[0]);
    vector<int>v;
    int k=3;
    subset(arr,v, 0,n,k);
}