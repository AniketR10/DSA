#include<iostream>
using namespace std;
class Vehicle{
    public:
     int engineSize;
     virtual void calculateMilege()=0;
     virtual void refuel()=0;
};
class Bike: public Vehicle{
    public:
int tyre;
void calculateMilege(){
    cout<<"bike ka milege"<<endl;
}
    void refuel(){;
    cout<<"bike ka refuel"<<endl;

}
};
class Car: public Bike{
    public:
int steering;
};
int main(){
    Bike b;

    b.calculateMilege();


}