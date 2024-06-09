#include<iostream>
#include<climits>

using namespace std;
void maxValue(int arr[], int n,int idx, int max){// for printing the max value
if(idx==n) cout<<max;
if(arr[idx]>max) max=arr[idx];

maxValue(arr, n,idx+1, max);
}
int maxValue2(int arr[], int n,int idx){// for returning the max value
if(idx==n) return INT_MIN;
return max(arr[idx], maxValue2(arr,n,idx+1));
}



int main(){
    int arr[]={4,8,2,5,1};
    int size= sizeof(arr)/sizeof(arr[0]);
    int max=0;
   // maxValue(arr,size,0, max);
    cout<<maxValue2(arr,size,0);

     
      
}