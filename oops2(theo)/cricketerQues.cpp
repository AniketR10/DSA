#include<iostream>
using namespace std;
class Cricketer{
    private:
    string name;
    int age;
    int noOfTm;
    int avgRuns;
    public:
    void setName(string name){
        this->name=name;
    }
    void setnoOfTm(int noOfTm){
        this->noOfTm=noOfTm;
    }
    void setAge(int age){
        this->age=age;
    }
    void setAvgRuns(int avgRuns){
        this->avgRuns=avgRuns;
    }
    string getName(){
        return name;
    }
     int getnoOfTm(){
        return noOfTm;
    }
    int getAge(){
        return age;
    }
    int getAvgRuns(){
        return avgRuns;
    }

    

};
int main(){
    Cricketer virat;
    virat.setAge(20);
    virat.setAvgRuns(156);
    virat.setnoOfTm(200);
    virat.setName("kholi");
    
    Cricketer dhoni;
    dhoni.setAge(25);
    dhoni.setAvgRuns(176);
    dhoni.setnoOfTm(20);
    dhoni.setName("thala");
    Cricketer cricketers[2]={virat,dhoni};
    
    for(int i=0; i<2; i++){
        cout<<cricketers[i].getAge()<<endl;
        cout<<cricketers[i].getnoOfTm()<<endl;
        cout<<cricketers[i].getAvgRuns()<<endl;
        cout<<cricketers[i].getName()<<endl;
    }



}