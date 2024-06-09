    // fibonacci basic code
// #include<iostream>
// using namespace std;
//     int fibo(int n){
//         if(n==0) return 0;
//         if(n==1) return 1;
//         return fibo(n-2)+ fibo(n-1);
//     }
// int main(){
//     int n= 6;
//     cout<<fibo(n);
// }


// by dp
// top down method(recursion)
#include<iostream>
#include<vector>
using namespace std;
vector<int> dp;
int fibo(int n){
    if(n==0 or n==1) return n;
    if(dp[n] != -1) return dp[n];
   else dp[n] = fibo(n-2) +fibo(n-1);
    return fibo(n-2) +fibo(n-1);
}
   
int main(){
    int n;
    cout<<"enter the value ";
    cin>>n;
    dp.clear();
    dp.resize(n+1, -1);
    cout<<fibo(n);
    

}


// bottom up method(iterative)
#include<iostream>
#include<vector>
using namespace std;
vector<int> dp;
int fibo(int n){
    if(n==0 or n==1) return n;
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i]= dp[i-1] +dp[i-2];
    }
    return dp[n];
    //lekin is sol mein bhi puri ki puri array maintain krni padti hai
    // bas last ke do var ko use krke curr var bana skte ho 
    // int a=0;
    // int b=1;
    // int i=2;
    // int c;
    // while(i<=n){
    //     c=a+b;
    //     a=b;
    //     b=c;
    // i++;
    // }
    // return c;
}
   
int main(){
    int n;
    cout<<"enter the value ";
    cin>>n;
    dp.clear();
    dp.resize(n+1, -1);
    cout<<fibo(n);

}


