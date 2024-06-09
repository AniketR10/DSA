#include<iostream>
using namespace std;
 class ComplexNo{
    private:
    int c_private;
    
     public:
    int img;
     int real;
     friend class primeNo;
     friend ComplexNo operator +(ComplexNo &c1, ComplexNo &c2);
        //  ComplexNo operator +(ComplexNo &c1){
        //     ComplexNo c3;
        //     c3.img=c1.img+ this->img;
        //     c3.real=c1.real+ this->real;
        //     return c3;
        //  } ye bekar method

 };
 class primeNo{
    public:
    void show(ComplexNo &c){
        c.c_private=15;
    }
 };
 ComplexNo operator +(ComplexNo &c1, ComplexNo &c2){//using friend operator best method issi se karyo
    ComplexNo c3;
    c3.img=c1.img+ c2.img;
     c3.real=c1.real+ c2.real;
            return c3;
         }

 






int main(){
    ComplexNo c1, c2;
    c1.img=10;
    c1.real=2;
    c2.img=20;
    c2.real=4;
    //simple method
    // ComplexNo a3;
    // a3.img=a1.img+a2.img;
    // a3.real=a1.real+a2.real;

      //by funoverloading
     ComplexNo c3=c1+c2;
           cout<<c3.img<<" "<<c3.real<<endl;
        
}