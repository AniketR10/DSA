#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<climits>
#include<cstring>
#define ll long long int
using namespace std;
int main(){
    //approach 2
    int n;
    cin>>n;
    vector<int> box(n+10,0); //n boxes have zero coins
    int m;
    cin>>m;
         while(m--){
            int L,R;
            cin>>L>>R;
            box[L]++;
            box[R+1]--;
         }
         for(int i=1;i<=box.size();i++){
            box[i]+=box[i-1];
         }
    vector<int> f(10000005,0); // its idx depict the coins and they contain the no. of boxes
    for(int i=1;i<=n;i++){
        f[box[i]]++;
    }
    // now doing suffix sum to include all the coins
    for(int i= f.size()-2;i>=0;i--){
        f[i] +=f[i+1];
    }
    int q; //no of queries
    cin>>q;
    while(q){
        int qe; //boxes containing min this no. of coins
        cin>>qe;
        cout<<f[qe]<<"\n";
       q--;
    }




        
}