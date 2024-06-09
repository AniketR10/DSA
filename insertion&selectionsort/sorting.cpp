#include<iostream>
using namespace std;
int main(){
    int arr[]={5,30,-5,107,45};
    int n=5;
    for(int ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl;
    for(int i=0; i<n; i++){// ham while loop se bhi kr skte hain krke dekh liyo
        for(int j=i+1; j>0; j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j], arr[j-1]);

            }
        }
    }
    for(int ele : arr){
        cout<<ele<<" ";
    }
}
