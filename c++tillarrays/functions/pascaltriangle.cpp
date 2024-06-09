#include<iostream>
using namespace std;
int fact(int x){
    int fact=1;
    for(int i=1; i<=x; i++){
        fact *= i;


    }
    return fact;
}

int combination(int n, int r){
    
    int ncr= fact(n)/(fact(r)*fact(n-r));
    return ncr;
}
int main(){
    int n;
    cout<<"enter the no. of lines till which you  want the pascal triangle ";
    cin>>n;
    int ncr;
    for(int i=0; i<=n; i++){
        for(int j=0; j<=i; j++){
            cout<<combination(i,j)<<" ";
            
        }
        cout<<endl;
    }
}
// but this code has higher time complexity we will see the optimides code in lec 18
// very good method
