// #include<iostream>
// using namespace std;
// int sum(int a, int b){
    
//     if(a%2 ==0 || a!=1) a++;
//     if(a>b) return 0;

//     return a+sum(a+1,b);
// }
// int main(){
//     int a,b;
//     cout<<"enter a :";
//     cin>>a;
//     cout<<"enter b :";
//     cin>>b;
//     cout<<sum(a,b);

// }
// #include<iostream>
//  using namespace std;
//  int steps(int n){
//     if(n<0) return 0;
//     if(n==1) return 1;
//     if(n==2) return 2;
//     if(n==3) return 4;

    
//     return steps(n-1)+steps(n-2) +steps(n-3);

//  }
//  int main(){
//     int n,a;
//     cout<<"enter the no. of stairs :";
//     cin>>n;
    
//    cout<< steps(n);
//  }
#include<iostream>
using namespace std;
bool power(int n){
    if(n==1) return true;
    if(n%2!=0 || n==0) return false;
    if(n%2==0) return power(n/2);
    
}
int main(){
    int n;
    cout<<"enter the integer :";
    cin>>n;
    cout<<(bool)(power(n));
}
