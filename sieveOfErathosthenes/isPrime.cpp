#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int n){
   if (n==1) return true;
   for(int i=2; i<sqrt(n); i++){
    if(n%i==0) return false;
   }
   return true;

    }
    void printFactors(int n){
        for(int i=1; i<sqrt(n); i++){
            if(n%i==0) {
                cout<<i<<" ";
            }

        }
        for(int i=sqrt(n); i>=1; i--){
            if(n%i==0) cout<<n/i<<" ";
        }
    }
int main(){
    printFactors(100);
    
   // cout<<isPrime(5)<<endl;

}