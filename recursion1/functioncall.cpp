#include<iostream>
using namespace std;
// void gun(){
//     cout<<"i love u"<<endl;

// }
// void fun(){
//     cout<<"how r u"<<endl;
//     gun();
// }
// int main(){
//     cout<<"hi aniket"<<endl;
//     fun();
// }
// void fun(int n){
//     if(n==0) return;
//     cout<<"hello pw"<<endl;
//     fun(n-1);
// }
// int main(){
//     fun(3);
// }

//print gm n no. times where n is user input
void fun(int n){
      if(n==0) return;
      
    cout<<"good morning"<<endl;
    fun(n-1);
     
    
}
int main(){
    int n;
cout<<"enter the no. of times you want to print "<<endl;
cin>>n;
fun(n);
}