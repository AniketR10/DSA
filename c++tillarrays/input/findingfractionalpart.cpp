#include<iostream>
using namespace std;
int main(){
    float x;
    cin>>x;
    int y=(int)x;
    if(y<1) y=y-1;
    float z=(float)y;
    cout<<"the fractional value is "<<x-z;


}