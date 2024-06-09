//push zeroes to the end while mainting the order of the other elements
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    int arr[10]={0,1,7,0,3,7,0,2,0,6};
       for(int i=0; i<10; i++){
        cout<<arr[i]<<" ";
       }
       cout<<endl;
       for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            if(arr[j]==0 ){
                swap(arr[j], arr[j+1]);

            }
        }
       }
       cout<<endl;

       for(int i=0; i<10; i++){
        cout<<arr[i]<<" ";
       }
       


}
