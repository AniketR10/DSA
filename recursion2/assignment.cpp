// #include<iostream>
// using namespace std;
// void reverse(int arr[],int size, int idx,int n){
//         if(idx==size){
//         cout<<-1<<endl;
//         return;
//     }
//     if(arr[idx]==n){
//         cout<<idx<<endl;
//         return;
//     }
       
//     else{
//     reverse(arr,size,idx+1,n);
//     }

    
// }
// int main(){
//     int arr[]={2,7,4,8,5};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     int n=10;
//     reverse( arr, size,0,n);
// }
// #include<iostream> sum of elements in array
// using namespace std;
// void sum(int arr[], int size,int idx,int suma){
     
     
//      if(idx==size){
//         cout<<suma<<endl;
//         return;
//      }
//      suma+=arr[idx];

    

//      sum(arr,size, idx+1, suma);
// }
// int main(){
//     int arr[]={2,7,4,8,5,9};
//     int size=sizeof(arr)/sizeof(arr[0]);
//   sum(arr,size,0,0);
// }
// reverse of a number
#include<iostream>
using namespace std;
void rev(int a,int n){
    if(a==0){
        cout<<n;
        return;
    }
     n *=10;
     n+=(a%10);
     a /=10;
     rev( a, n);
}
int main(){
    int a=1283578;
    rev(a,0);

}



