#include<iostream>
using namespace std;
int sq(int x){
    int a=x*x;
    return a;

}
int nds(int y){
    int count=0;
    
    while(y>0){
        
        y /=10;
        
        
        count++;
    }
    return count++;
    


}

int main(){
    int n;
    cout<<"enter the number ";
    cin>>n;
    cout<<"the square is"<<sq(n);
    cout<<endl;
    cout<<"total digits in the number are "<<nds(n);

}