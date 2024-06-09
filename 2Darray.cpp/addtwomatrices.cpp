#include<iostream>
using namespace std;
int main(){
    int arr[2][3]={1,2,3,4,5,6};
    int arr2[2][3]={4,8,7,6,2,1};
    int arr3[2][3];
    for(int i=0; i<=1; i++){
        for(int j=0; j<=2; j++){
             arr3[i][j]= arr[i][j]+ arr2[i][j];
        }
    }
     for(int i=0; i<=1; i++){
for(int j=0; j<=2; j++){
    cout<<arr3[i][j]<<" ";
}
cout<<endl;
}
}
//isme 3rd array banane ki need ni hai
// we can store the sum in 2nd or 1st array itself
// khud se ekrke dekh