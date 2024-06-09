#include<iostream>
using namespace std;
void fnl(int n, int &ld, int &fd ){
    ld=n%10;
    while(n>9){
        
        n /=10;
    }
    fd= n;
    return;
    


}
int main(){
    int n ,ld, fd;
    cout<<"enter the number ";
    cin>>n;
    fnl(n, ld,fd);
    cout<<n<<" "<<ld<<" "<<fd;

}
// second method lec 24