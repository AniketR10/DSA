//print the sum of this series 1-2+3-4+5-6....n
// #include<iostream>
// using namespace std;
// int main(){
//     int sum=0,n, a=0, sum2=0;
//     cout<<"enter the number of digits till you want the sum ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         if(i%2!=0){
//     sum+=i;
    
// }
// else sum-=i;
//     }
//     cout<<sum;

    
// }
//method 2 without loops
#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"enter the digits ";
    cin>>n;
    int sum=0;
    if(i%2==0){ //when n is even
        sum= -n/2;

    }
    else{ //when n is odd
        sum= -n/2 +n;
    }
    cout<<sum;

}
