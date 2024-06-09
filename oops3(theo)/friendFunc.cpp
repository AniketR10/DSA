#include<iostream>
using namespace std;
class A{
    int a_private=10;
    public:
    friend void show(A &a);
    // void show2(){
    
    //     cout<<a_private<<endl;
    // }
};
void show(A &a){
    cout<<a.a_private<<endl;
}
int main(){
    A a;
    //a.show2();
    show(a);


}