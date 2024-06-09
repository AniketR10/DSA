//can be done by brian and as the same method as maxpower
#include<iostream>//method 1 by our own logic
using namespace std;

string decToBin(int n){
    
 n=n | (n>>1);
 n=n | (n>>2);
 n=n | (n>>4);
 n=n | (n>>8);
 n=n | (n>>16);//for  32 bit no.
  int num= (n+1)>>1;//or/2;
  string result="";
   while(num>0){
        if(num%2==0){
            result='0'+result;
        }
        else{
            result='1'+result;
        }
       // num=num/2;
        num=num>>1;
   }
   string res1=result;
   num=(num>>1)/2;
   string result1="";
   while(num>0){
        if(num%2==0){
            result1='0'+result1;
        }
        else{
            result1='1'+result1;
        }
       // num=num/2;
        num=num>>1;
   }

  

  

}

int main(){
    int x=23;
    cout<<decToBin(x);
    
}


