#include<iostream>

using namespace std;
int main(){ 
  //method 2 (very good and uses no xtra space)
// method 1 do from lec 57
int arr[]={4,2,7,9,8};
int n=5;
bool flag=true;
for(int i=0; i<n; i++){
  int count=0;
  for(int j=0; j<n; j++){
    if(i==j) continue;
    if(arr[j]>arr[i]) count++;

  }
  int pos=n-count-1;
  if(pos==0){
    if(arr[i] != arr[pos] && arr[i] != arr[pos+1]){
      flag = false;
      break;
    }
  }
  else if(pos==n-1){
    if(arr[i] != arr[pos] && arr[i] != arr[pos-1]){
      flag = false;
      break;
    }
  }
  else {
    if(arr[i] != arr[pos] && arr[i] != arr[pos-1] && arr[i] != arr[pos+1]){
      flag=false;
      break;
    }
  }
}
cout<<flag;
}