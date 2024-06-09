#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int arr[]={5,40,1,4,2};
    int m=5;
   for(int ele : arr){
    cout<<ele<<" ";
   }
   cout<<endl;
   
        for(int i=0; i<m; i++){
            int min=INT_MAX;
   int idx=-1;
            for(int j=i; j<m; j++){
                    if(arr[j]<min){
                        min=arr[j];
                        idx=j;
                    }
            }
            swap(arr[idx], arr[i]);

        }
        for(int ele : arr){
            cout<<ele<<" ";
        }

}