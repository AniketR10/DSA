#include<iostream>
using namespace std;
int fact(int x){
  int  fact=1;
    for(int i=1; i<=x; i++){
        fact *=i;

    }
    return fact;
}
int combi(int n, int r){

    int ncr= fact(n)/(fact(r)*fact(n-r));
    return ncr;

}
int permu(int n, int r){
    int npr= fact(n)/fact(n-r);
    return npr;
}
int main(){
    int n;
    cout<<"Enter the value of n ";
    cin>>n;
    int r;
    cout<<"enter the value of n ";
    cin>>r;
    
    int ncr = combi(n,r);
    int npr =permu(n,r);
    cout<<ncr<<endl;
    cout<<npr;
}