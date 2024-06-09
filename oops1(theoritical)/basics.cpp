// #include<iostream>
// using namespace std;
// class player{
//     public:
//     int score;
//     int health;
 


// };
// int main(){
//     player amit;
//    amit.score=10;
//     amit.health=70;
//     cout<<"score is "<<amit.score<<endl;
//     cout<<"health is "<<amit.health<<endl;
   
// } not a good method in terms of security
#include<iostream>
using namespace std;
class player{
    private:
    int score;
    int health;
    public:
    //setter
    void setScore(int s){
        cout<<"score is being called "<<endl;
        score=s;
    }
    void setHealth(int h){
        cout<<"health is being called "<<endl;
        health=h;
    }
    //getter
    int getScore(){
        
        return score;
    }
    int getHealth(){
        return health;
    }

};
int main(){
   player ansh;
   ansh.setScore(10);
   ansh.setHealth(85);
   cout<<ansh.getScore()<<endl;
   cout<<ansh.getHealth()<<endl;

}//ab ese mein agar koi bhi score ya health ko change krna chata hai usse fun 
//ko call krna padega jo ki agar ham function mein statement lageke pat  kr skte hain