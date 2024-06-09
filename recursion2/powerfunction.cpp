#include<iostream>
using namespace std;
int power(int a,int b){
      
     if(b==1) return a;
     int ans =power(a, b/2);//isko variable mein rakhne se tc kam aayegi warna bahut high aa jayegi
    if(b%2!=0) {
       return ans*ans*a;
    }
    else return ans*ans;
                      
    
//tc =O(logn) same is the sc
}
int main(){
    int a,b;
    cout<<"enter the no. and the power ";
    cin>>a>>b;
    cout<<power(a,b);
}