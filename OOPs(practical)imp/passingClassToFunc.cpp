#include<iostream>
using namespace std;
 class Car{
        public:
        int price;
        string name;
Car(int x, string n){
    name=n;
    price=x;
        
    }
    
    };
    
    void change(Car *c){
         //(*c).price=800000;
        // (*c).name="baleno"; or
         c->name="baleno";
          c->price=800000;
    }
    int main(){
        Car c1={1200000,"kia seltos"};
        cout<<c1.price<<" "<<c1.name<<endl;
        change(&c1);
        cout<<c1.price<<" "<<c1.name<<endl;
        Car *c2=new Car{400000,"alto"};//dynamic allocation
        cout<<c2->name<<endl;





    }