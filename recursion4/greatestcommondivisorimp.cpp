//iterative code
//hcf(24,60)
//for(int i=24; i>=2; i--){
  //  if(24%i==0 && 60%i==0)return i;
//
//}
//return 1; the tc is O(min(a,b))
// remeber hcf(a,b)<=min(a,b) and lcm(a,b)>=max(a,b);
// now by recursively code
//euclid's division algo i.e. long division method
#include<iostream>
using namespace std;
int hcf(int a, int b ){
    if(a==0) return b;
    else return hcf(b%a,a);;
    
}
int main(){
int a=24;
int b=60;

cout<<hcf(a,b);
}
//tc O(log(a+b))

