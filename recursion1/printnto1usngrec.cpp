#include<iostream>
using namespace std;
void rec(int n){
     if(n==0) return ;//base case
    cout<<n<<endl;//kaam
   //recursive call
     rec(n-1);
}
int main(){
    int n;
    cout<<"enter till which u want to reoccur ";
    cin>>n;
    rec(n);
}