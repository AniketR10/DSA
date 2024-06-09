#include<iostream>
using namespace std;
//multilevel inheritance
class A{
    public://can be accessed from outside,can be inherited
    int a_ka_public;
    protected://can't be accessed from outside, can be inherited
    int a_ka_protected;
    private://can't be accessed from outside,can't be inherited
    int a_ka_private;


};

class B{
    public:
    int b_ka_public;
    void access(){
        
    }


};
class C: public B, public A{//multiple inhertance

};
int main(){
    B b;
   // b.a_ka_public=100;

    

}