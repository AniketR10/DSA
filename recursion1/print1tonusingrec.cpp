#include<iostream>
using namespace std;
// void rec(int i,int n){//using xtra parameter
//     if(i>n) return;
//     cout<<i<<endl;
//     rec(i+1,n);
// }
//without using xtra prameter
void rec(int n){ //jabardast concept dry run krke dekh
    if(n==0) return;
   rec(n-1);
    cout<<n<<endl;
     
}
int main(){
    int n;
    cout<<"enter till which u want to reoccur ";
    cin>>n;
    rec(n);
}