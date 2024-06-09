#include<iostream>
using namespace std;
class Gun{
    public:
    int ammo;
    int scope;
    int damage;

};

     class Vest{
    private:
    string color;
    int lvl;
    string gender;
    public:
    void setColor(string color){
      this->color=color;

    }
  void setGender(string gender){
    this->gender=gender;
  }
  void setLvl(int lvl){
    this->lvl=lvl;
  }
  string getColor(){
    return color;
  }
  int getLvl(){
    return lvl;
  }
  string getGender(){
    return gender;
  }
     };
class player{
     private:
    class Helmet{
      private:
        int hp;
        int level;
        public:
        void setHp(int hp){
            this->hp=hp;

        }
        void setLevel(int level){
            this->level=level;

        }
        int getHp(){
            return hp;
        }
        int getLevel(){
            return level;
        }
    };

    int score;
    int age;
    int health;
    bool alive;
    Gun gun;
    Helmet helmet;
    Vest vest;
   
       


    

    public:
    void setScore(int score){
        this->score=score;
    }
    void setHealth(int health){
        this->health=health;
    }
    void setAge(int age){
        this->age=age;
    }
    void setIsalive(bool alive){
        this->alive=alive;
    }
    void setGun(Gun gun){
        this->gun=gun;
    }
    void setVest(Vest vest){
      this->vest=vest;
    }
    
    int getScore(){
        return score;
    }
    int getHealth(){
        return health;
    }
    int getAge(){
        return age;
    }
    int isAlive(){
        return alive;
    }
    Gun getGun(){
        return gun;
    }
    Vest getVest(){
      return vest;
    }
    

     void setHelmet(int level){
            Helmet *helmet=new Helmet;
            helmet->setLevel(level);
            int health;
            if(level==1)
            health=25;
            else if(level==2)
            health=50;
            else if(level==3)
            health=100;
            else cout<<"error, invalid level!";
            helmet->setHp(health);
            this->helmet=*helmet;


        }
        Helmet getHelmet(){
            cout<<helmet.getHp()<<endl;
            cout<<helmet.getLevel()<<endl;
        }

       
   
};
 player getmaxHealth(player a, player b){
        if(a.getHealth()>b.getHealth()) return a;
        else return b;

    }
    int add(player a, player b){
         return a.getAge()+b.getAge();
    }
int main(){
        player harsh;
        player sanket;
        player *aniket=new player;

        Gun akm;
        akm.ammo=100;
        akm.damage=90;
        akm.scope=2;

        Vest gilet;
        gilet.setColor("red");
        gilet.setLvl(5);
        gilet.setGender("female");






        harsh.setScore(50);
        harsh.setIsalive(true);
        harsh.setHealth(100);
        harsh.setAge(19);
        harsh.setGun(akm);
        harsh.setHelmet(2);

      

         sanket.setScore(80);
        sanket.setIsalive(true);
        sanket.setHealth(70);
        sanket.setAge(25);
        sanket.setHelmet(3);
        sanket.setVest(gilet);

      

        aniket->setHealth(20);
        Vest vest123=sanket.getVest();
        cout<<vest123.getColor()<<endl;
        cout<<vest123.getLvl()<<endl;

        Gun gun123= harsh.getGun();
        cout<<aniket->getHealth()<<endl;//dynamic memory allocation
        cout<<gun123.damage<<endl;
        cout<<gun123.scope<<endl;

        cout<<add(harsh, sanket)<<endl;
        player raju= getmaxHealth(harsh, sanket);
        cout<<raju.getHealth()<<endl;
        cout<<raju.getScore()<<endl;
        harsh.getHelmet();
        sanket.getHelmet();
        player player[3]={harsh, sanket, *aniket };
        cout<<player[0].getAge();

}


        





        




