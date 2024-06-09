#include<iostream>
#include<vector>
#include<climits>

using namespace std;
int main(){
    int arr[]={19,12,23,8,16};
    int m=5;
    
   for(int i=0; i<m; i++){
    cout<<arr[i]<<" ";
   }
   cout<<endl;
   int x=0;
   vector<int>v(m,0);
  for(int i=0; i<m; i++){
int min=INT_MAX;

int idx=-1;
for(int j=0; j<m; j++){
    if(v[j]==1) continue;
    else{
        if(arr[j]<min) {
            min=arr[j];
            idx=j;
        }
    }
}
    arr[idx]=x;
    v[idx]=1;
    x++;
    


  }
  for(int i=0; i<m; i++){
    cout<<arr[i]<<" ";
   }

   
   }//iska ex dusra method hai with -ve no. dekh liyo
   //aslo with  hashmaps

    


