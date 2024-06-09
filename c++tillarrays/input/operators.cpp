#include<iostream>
 using namespace std;
 int main(){
    // int x=3;
    // cout<<(x=6);
    int p=1, q=2, r=2;
    cout<<(p==q==r); // (p==q)==(r) -> (0)==2 -> 0
    // (p)==(q==r) -> (1)==(2==2)-> (1)==(1)-> 1
 }