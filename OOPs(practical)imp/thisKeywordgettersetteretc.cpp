#include<iostream>
using namespace std;
 class Car{
        public:
        int price;
        string name;
        void print(){//getter
            cout<<name<<" "<<price<<" "<<seats<<" "<<endl;
        }
        void setSeat(int x){
            seats=x;
        }
        int getSeat(){
            return seats;
        }
        Car(string name, int price, int seats){
            this->name=name;
            this->price=price;
            this->seats=seats;
        }
        private:
        int seats;
public:
        Car(){

        }
    
    Car(string name, int price){
        this->name=name;//or (*this).name=name;
        this->price=price;

    }

 };

    int main(){
        Car c1= Car("bmw", 70000000);
        cout<<c1.price<<" "<<c1.name<<endl;
        Car c2= Car("honda amaze", 1200000, 5);
        c2.print();
        c2.setSeat(4);
        c2.print();
        cout<<c2.getSeat()<<endl;


        
    }