#include<iostream>
using namespace std;
int main(){
    int arr[3][2]={1,2,3,4,5,6};
    for(int i=0; i<=2;i++){ //row

        for(int j=0; j<=1; j++){ //column
            cout<<arr[i][j]<<" ";
            
        }
        cout<<endl;
    }
}