#include<iostream>
using namespace std;
class A{
    public://can be accessed from outside,can be inherited
    int a_ka_public;
   


};

class B:virtual public A{
    public:
    int b_ka_public;
    void access(){
        
    }


};
class C:virtual public A{
int c_ka_public;

};
class D:public B, public C{
  public:
    int d_ka_public;
    void show(){
        cout<<a_ka_public;
    }
};

int main(){
    D d;
    d.a_ka_public=10;
    d.show();


    

}