#include<iostream>
using namespace std;
 class Student{
        public:
        float gpa;
        int rno;
        string name;

    };
    void print(Student s){
        cout<<s.name<<" "<<s.rno<<" "<<s.gpa<<endl;
    }
int main(){
   
    Student s1;// decleration ka method 1
    s1.gpa=9;
    s1.name="aniket";
    cout<<"enter the roll no of the student ";
    cin>>s1.rno;
    //cout<<s1.name<<" "<<s1.rno<<" "<<s1.gpa<<endl;
    print(s1);
    cout<<&s1<<endl;//s1 object ka address print ho skta hai but akela s1 print ni ho skta

       Student s2={7.6, 23, "jonny"};//method 2,jis tarike se upar gpa rno name hai sui tarike se yaha fill karyo 
      // cout<<s2.name<<" "<<s2.rno<<" "<<s2.gpa<<endl;
      print(s2);




}