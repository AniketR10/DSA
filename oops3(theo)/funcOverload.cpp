#include<iostream>
using namespace std;
class Bike{
    public:
    
    int tyreSize;
    int engineSize;

//constructor overloading
    Bike(int ts,int es): tyreSize(ts),engineSize(es){}
    Bike(int ts):tyreSize(ts){}
    Bike():tyreSize(12),engineSize(100){}

};
//function overloading
void add(int a,int b){
    cout<<a+b<<endl;
}
void add(int x){
    cout<<x*10<<endl;
}

int main(){
    add(5,6);
    add(4);


     // Bike tvs(13,150);
      Bike tvs(25);
      
      Bike honda(12,200);
      //cout<<tvs.engineSize<<endl;
       cout<<tvs.tyreSize<<endl;
      //cout<<honda.tyreSize<<endl;
    //   cout<<"the engine size of tvs is "<<tvs.engineSize<<endl;
    //  cout<<"the engine size of honda is"<<honda.engineSize<<endl;


}