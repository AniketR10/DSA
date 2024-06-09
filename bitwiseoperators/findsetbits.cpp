// #include<iostream>//method 1 by our own logic
// using namespace std;
// void decTobin(int num,int count){
//     string result="";
    
//     while(num>0){
        
//         if(num%2==0){
//             result='0'+result;
//         }
//         else{
//             result='1'+ result;
//             count++;
//         }
//         num=num>>1;
//     }
    
    
//     cout<<result<<endl<<count;

// }

// int main(){
//     int n;
//     cout<<"enter the number ";
//     cin>>n;
//     decTobin(n,0);
//     cout<<endl;

// }
//method 2 by in built func
// #include<iostream>
// using namespace std;
// int countSetBits(int n){
//     return __builtin_popcount(n);
// }
// int main(){
//     cout<<countSetBits(13);
// }
//method 3 (most efficient as tc in just same as no. of setbits) by brian kernign method
//iski observation dekh lena dhang se in lec
#include<iostream>
using namespace std;
int countSetBit(int n){
    int count=0;
    while(n>0){
        count++;
        n=(n & (n-1));
    }
    return count;
}
int main(){
    cout<<countSetBit(12);
}

