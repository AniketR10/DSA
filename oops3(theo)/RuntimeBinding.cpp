#include<iostream>
using namespace std;
class Vehicle{
    public:
    int tyre;
   virtual void show(){
        cout<<"vehicle ka object"<<endl;
    }
};
class Bike: public Vehicle{
 public:
 int handle;
 void show(){
    cout<<"Bike ka object"<<endl;

 }
};
class Car :public Bike{
    public:
int steering;
void show(){
cout<<"car ka object"<<endl;
}
};
int main(){
    //compiler pov - vehicle  ka type hai
    //runtime pov - bike ka address hai
    Vehicle *v;
    Bike b;
    //v=&b; or
    v= new Bike;//direct hame yahi par on the spot bike ka object bana liya hai
    v->show();
    v= new Vehicle;
      v->show();
      



}