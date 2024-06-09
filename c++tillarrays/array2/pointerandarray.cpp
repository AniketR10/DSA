#include<iostream>
using namespace std;
int main(){
    int arr[]={4,7,2,4,8};
    
    int* ptr= arr; //giving address
     cout<<ptr<<endl;
     for(int i=0; i<=4; i++){
         cout<<ptr[i]<<" ";//as ptr contians the address of the array
         
     }                 //do we can print the whole array thru it
     ptr=arr;
     
     *ptr=8; // ptr[0]=8;
     ptr++; //ptr is pointing to the 2nd element
     *ptr=9;
     ptr--; // ptr is pointing to 1st element
     cout<<endl;
     for(int i=0; i<=4; i++){
        cout<<*ptr<<" ";
        ptr++;
     }
     ptr= arr; //ptr i s pointing to the 1st element again


    
}