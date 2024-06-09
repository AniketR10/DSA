#include<iostream>
using namespace std;
class Vehicle{//base class, parent class

public:
int tyreSize;
    int engineSize;
    string companyName;
    int lights;
    Vehicle(){
    cout<<"vehicle ka constructor call hua"<<endl;
}
void callengineSize(){
    cout<<engineSize<<endl;
}
};

class Car:public Vehicle{//car inherits vehicle
public:

    int steeringSize;
};

class Bike: public Vehicle{//bike inherits vehicle,derived class
    public:
    
    int handleSize;
    Bike(){
        cout<<"bike ka constructor call hua"<<endl;
    }

};
int main(){
    Bike honda;
    honda.tyreSize=100;
    honda.handleSize=20;
    Car nano;
    honda.engineSize=40;
    nano.steeringSize=30;
    nano.companyName="tata";
    cout<<honda.tyreSize<<" "<<nano.steeringSize<<endl;
    cout<<honda.handleSize<<" "<<nano.companyName<<endl;
    honda.callengineSize();
    

    
}