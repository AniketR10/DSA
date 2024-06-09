// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the no.";
//     cin>>n;
//     int fact=1;
//     for(int i=1; i<=n; i++){
//         fact *=i;
//     }
//     cout<<fact;
// }
#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0 || n==1) return 1;
    return n*factorial(n-1);
}
int main(){
    int n;
    cout<<"enter the no.";
    cin>>n;
        cout<<factorial(n);
}
//convert decimal to binary by simple method ko yaad krle