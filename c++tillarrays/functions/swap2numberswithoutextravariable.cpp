#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<a<<""<<b;
}
//swapping cannot be done using functions as address is different but can we done if we use addresses change