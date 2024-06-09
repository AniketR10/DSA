#include<iostream>
using namespace std;
//case 1, we can declare the deafult value in the fun itself
// void fun(int x=7, int y=4){
//     cout<<x<<" "<<y;
// }
// int main(){
//     fun();
// }
//case2
// void fun(int x=7, int y=4){
//     cout<<x<<" "<<y;
// }
// int main(){
//     fun(2,3);
// }
//case 3
void fun(int x=7, int y=4){
    cout<<x<<" "<<y;
 }
 int main(){
     fun(2);
 }
 //agar fun mein default value deni hai to sab mein deni hogi nahi toh ksisi mein mat do
//void fun(int x, float y) is correct


