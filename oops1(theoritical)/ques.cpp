//book wala ques
#include<iostream>
using namespace std;
class book{
    public:
    string name;
    int pages;
    int price;
    public:
    int priceB(int p){
        if(p>price) return 0;
        else return 1;

    }
    bool bookName(string n){
        if(n==name) return true;
        else return false;
    }

};
int main(){
    book money;
    money.name= "rdpd";
    money.price=2000;
    money.pages=300;
    cout<<money.bookName("rdpd")<<endl;
    cout<<money.priceB(10000);




}