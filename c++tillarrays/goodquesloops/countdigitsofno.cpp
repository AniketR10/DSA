#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter the number ";
  cin>>n;
  int a=n;
  int j=0;
  while(n>0){
    n/=10;
    
    j++;
    


  } 
  if(a==0) cout<<1;
  
  cout<<"there are "<<j<<" digits in "; 
  cout<<a;
}