#include<iostream>
using namespace std;
class A{
    public:
    int allu;
    int sallu;
    void show(){
        cout<<"a ka object"<<endl;
    }


};
class B: public A{
    public:
    int chotu;
    int motu;
    void show(){
        cout<<"b ka object"<<endl;
    }

};
int main(){
    A a;
    a.show();
    B b;
    b.show();
    b.A::show();

//this is by scope reoslution operator
}
