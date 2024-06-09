#include<iostream>
using namespace std;
int fact(int x){
    int f=1;
    for(int i=1; i<=x; i++){
        f *= i;
    }
    return f;
}
int main(){
    int n;
    int x;
    cout<<"enter the no. till which you want the factorial";
    cin>>n;
    for(int i=1; i<=n; i++){
        cout<<fact(i)<<endl;
    }
    cout<<endl;

}