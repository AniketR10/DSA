#include<iostream>
using namespace std;
class Bike{
    public:
   static int noOfTyre;//belongs to the class
    int tyreSize;
    int engineSize;

    // Bike(int tyreSize,int engineSize){
    //    this->tyreSize=tyreSize;
    //    this->engineSize=engineSize;
       
    // }
    Bike(int ts,int es): tyreSize(ts),engineSize(es){}//initilisation list

    static void incNoOfTyres(){
        noOfTyre++;
    }

   
};
//int Bike::noOfTyre=10;
//  void print(){
//    static int b=10;
//     cout<<b<<endl;
//     b++;
//  }
int main(){
    // print();
    // print();
    // print();
     Bike tvs(13,150);//object creation//constructor ko call jaayegi
     Bike honda(12,200);
     cout<<tvs.noOfTyre<<endl;
    tvs.incNoOfTyres();
    cout<<tvs.noOfTyre<<endl;
    cout<<honda.noOfTyre<<endl;
    honda.incNoOfTyres();
    cout<<tvs.noOfTyre<<endl;
    cout<<honda.noOfTyre<<endl;



      cout<<tvs.tyreSize<<endl;
    //  cout<<honda.tyreSize<<endl;
      cout<<"the engine size of tvs is "<<tvs.engineSize<<endl;
    //  cout<<"the engine size of honda is"<<honda.engineSize<<endl;
    //static hmesha static ko  hi call krta hai 


}