//we do it by same brian algo
// #include<iostream>
// using namespace std;
// int main(){
//     int x=10;
//     int temp;
//     while(x!=0){
//      temp=x;
//     x=x & (x-1);
//     }
//     cout<<temp<<endl;

// }
//memthod 2 by observation
 #include<iostream>
using namespace std;
int maxPower(int n){
 n=n | (n>>1);
 n=n | (n>>2);
 n=n | (n>>4);
 n=n | (n>>8);
 n=n | (n>>16);//for  32 bit no.
  int p= (n+1)>>1;//or/2;
  
  

}

int main(){
    int x=100;
    cout<<maxPower(x);
    
}
