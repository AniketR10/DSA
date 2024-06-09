#include<iostream>
using namespace std;
 int main(){
     int n;
     for(int i=1;i<=100; i++ ){
         if(i%2==0) continue;
         if(i%2!=0)
        cout<<i<<endl;    }
}


     
    


//continue ki condn agar satisfy ho gayi  toh fir uske neeche ki saari statement nahi chalti seedha next iteration pe aa jaate hain
// and break mein pura loop hi terminate hoo jaata kuch ni chalta hai
