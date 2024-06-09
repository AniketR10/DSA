//method 1 by brute force
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int k;
    cout<<"enter the value of k ";
    cin>>k;
    int arr[]={7,1,2,5,8,4,9,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    // for(int i=0; i<=n-k; i++){
    //     int sum=0;
        
    //     for(int j=i; j<i+k; j++){
            
            
    //         sum=sum+arr[j];
    //         //          maxsum=max(sum,maxsum);
    //         //or
    //         if(maxsum<sum){
    //             maxsum=sum;
    //             maxidx=i;
    //         }
    //     }
    //methos 2 by sliding window with good tc
int maxSum=INT_MIN;
int maxIdx=0;
int Sum=0;
for(int i=0; i<k; i++){
    Sum+=arr[i];
}
maxSum=Sum;
int i=1,j=k;
while(j<n){
     Sum=Sum+arr[j]-arr[i-1];
    if(maxSum<Sum){
        maxSum=Sum;
        maxIdx=i;
    }
    
    i++,j++;
}
cout<<maxSum<<" "<<maxIdx<<endl;


        
    
    


}