#include<iostream>
using namespace std;
int binTodec(string &str){
    int n=str.size();
    int result=0;
    for(int i=n-1;i>=0; i--){
        char ch=str[i];
        int num=ch-'0';
        result+= num*(1<<(n-i-1));
    }
    return result;
}
string decTobin(int num){
    string result="";
   while(num>0){
        if(num%2==0){
            result='0'+result;
        }
        else{
            result='1'+result;
        }
       // num=num/2;
        num=num>>1;
   }
   return result;
}
int main(){
    string str="001011";
    cout<<binTodec(str)<<endl;
    
    cout<<decTobin(19)<<endl;

}
//dry run krke check kryo