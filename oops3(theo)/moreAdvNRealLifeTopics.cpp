#include<iostream>
using namespace std;
class Bike{
    public:
    int tyreSize;
    int engineSize;
    // Bike(){ //default constructor
    //     cout<<"constructor is being called"<<endl;
    // }
    Bike(int tyreSize,int engineSize){//parameterised constructor used to initiliase values
       this->tyreSize=tyreSize;
       this->engineSize=engineSize;
       cout<<"constructor is being called"<<endl;
    }
    ~Bike(){
        cout<<"destructor call hua"<<endl;
    }

};
int main(){
    Bike tvs(10,150);//object creation//constructor ko call jaayegi
    Bike honda(12,200);
    bool flag=true;
    if(flag==true){
        Bike bmw(20,1000);
        cout<<bmw.tyreSize<<" "<<bmw.engineSize<<endl;
    

    }
    cout<<tvs.tyreSize<<endl;
    cout<<honda.tyreSize<<endl;
    cout<<"the engine size of tvs is "<<tvs.engineSize<<endl;
    cout<<"the engine size of honda is"<<honda.engineSize<<endl;


}