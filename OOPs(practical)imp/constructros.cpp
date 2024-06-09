#include<iostream>
using namespace std;
class Student{
    public:
    int rno;
    string name;
    float gpa;
    Student(){

    }
    Student(string x, float y, int z){
        gpa =y;
        rno=z;
        name=x;


    }
    Student(int x, float y, string z){
        gpa =y;
        name=z;
        rno=x;


    }
    Student(int x, string y){
        rno=x;
        name=y;
    }

};
int main(){
    Student s1={"aniket", 8.2,80};
    Student s2= Student("gagan", 9.2,90);//constructor mein values upar ke constructor mein se kisi ek ke order me honi chiye
     Student s3= Student(88,8.3,"Alisha");
     Student s4= Student(13, "animesh");
     Student s5;//iske liye default constructor lagana padega
     s5.rno=89;
     s5.gpa=6.9;
     s5.name="ankit";




} 