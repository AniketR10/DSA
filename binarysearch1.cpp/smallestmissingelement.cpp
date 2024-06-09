#include<iostream>
using namespace std;
int main(){
    int arr[]={0,1,2,3,4,8,9,12};
    int m=8;
    // by simple liner search method
    // for(int i=0; i<m; i++){
    //     if(arr[i]!=i){
    //         cout<<i;
    //         break;
    //     }
        
    // }
    //now by binary search
    int lo=0;
    int hi=m-1;
    int ans=-1;
    
    while(lo<=hi){
        int mid= lo+(hi-lo)/2;
        if(arr[mid]==mid) lo=mid+1;
        else{
            ans=mid;
            hi=mid-1;

        }


            
    
}
cout<<ans;
}