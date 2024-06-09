#include<iostream>
using namespace std;
int main(){
    
    for(int i=1; i<=500; i++){
        int x=i;
        int cs=0;
        
        while(x>0){
            int lb=x%10;
            cs +=(lb*lb*lb);
            x/=10;

        }
        if(i==cs) cout<<cs<<endl;
        
        


    }

}