#include<iostream>
using namespace std;
void fun(int x, int y){
     cout<<" "<<&x<<endl;
     cout<<" "<<&y<<endl;
}
int main(){
    int x=2;
    int y=5;
    cout<<&x<<endl;
    cout<<&y<<endl;
    fun(x,y);


}
//arguments in main and othr functions  are not same

