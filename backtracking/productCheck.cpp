#include<bits/stdc++.h>

using namespace std;

bool f(int arr[], int n,int idx, int prod, int t){

    if(prod == t) return true;
    if(prod>t or idx>=n) return false;

   // pick
 bool ans=  f(arr,n, idx+1, prod*arr[idx],t);
 if(ans) return true;

   // not pick
   f(arr,n,idx+1, prod,t);
}
int main(){
      int n{5};
     // cin>>n;
      int arr[n] ={2,3,2,5,4};
      int target =16;
        cout<<f(arr,n,0,1,target);


}