#include<iostream>
using namespace std;
int main(){
    int arr[]={10,7,6,5,3,0,-2,-4};
    int n=8;
    int x=-2;
    
               int lo=0;
               int hi=n-1;
               while(lo<=hi){
                int mid=lo+(hi-lo)/2;
                if(arr[mid]==x){
                    cout<<mid;
                    break;
                }
                else if(arr[mid]<x) hi=mid-1;
                else lo=mid+1;
               }
               
              
               
        }



