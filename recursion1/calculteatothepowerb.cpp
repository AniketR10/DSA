#include<iostream>
using namespace std;
int power(int a, int b){
   if(b==0) return 1;
   return a*power(a,b-1);

}
int main(){
    int a,b;
    cout<<"enter the no. of which u want the power ";
    cin>>a>>b;
   cout<<power(a,b);
}