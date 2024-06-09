#include<iostream>
using namespace std;
int main(){
   int arr1[2][3]={1,2,3,4,5,6};
   int arr2[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
   int arr3[2][4];
   for(int i=0; i<=1; i++){
    for(int j=0; j<=2;  j++){
        cout<<arr1[i][j]<<" ";
    }
    cout<<endl;
   }
   cout<<endl;
   for(int i=0; i<=2; i++){
    for(int j=0; j<=3;  j++){
        cout<<arr2[i][j]<<" ";
    }
    cout<<endl;
   }

 for(int i=0; i<=1; i++){
    for(int j=0; j<=3; j++){
        arr3[i][j]= 0;
        for(int k=0; k<=2; k++){
             arr3[i][j] +=arr1[i][k]*arr2[k][j];
        }
    
    }
 }
 cout<<endl;
 for(int i=0; i<=1; i++){
    for(int j=0; j<=3; j++){
        
             cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }
 


}
