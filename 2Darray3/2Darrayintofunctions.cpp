#include<iostream>
#include<vector>
using namespace std;
void change(int a[]){
        a[0]=20;
    }
    void change2D(int arr[3][3]){
        arr[0][2]=20;
    }
    
int main(){
    
// int a[]={1,2,3};
// cout<<a[0]<<endl;
// change(a);
// cout<<a[0]<<endl; 
int arr[][3]={1,2,3,4,5,6,7,8,9};
cout<<arr[0][2]<<endl;
change2D(arr);
cout<<arr[0][2]<<endl;


}
//2D array ko bina size ke function pe pass ni kara skte
