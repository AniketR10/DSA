#include<iostream>
using namespace std;
void rev(int a,int n){
    if(a==0){
        cout<<n;
        return;
    }
    if(n==0){
        
    }
     n *=10;
     n+=(a%10);
     a /=10;
     
     rev( a, n);
}
int main(){
    int a=1203578;
    rev(a,0);

}