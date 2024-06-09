#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<climits>
#include<cstring>
#define ll long long int
using namespace std;
int main(){
    //approach 1
    //iski second approach jyada efficient and easy to unbderstand hai
    //usi ko dhang se dek n samaj isko bhi samaj as ye dimag kholti hai
    int n;
    cin>>n;
    vector<int> box(n+1,0); //n boxes have zero coins
    int m;
    cin>>m;
    vector<int> l(n+1,0);
    vector<int> r(n+1,0);
    for(int i=0;i<m;i++){
        int L,R;
        cin>>L>>R;
        l[L]++; //us particular box se kitni baar 
        r[R]++;  //coin bharna start hua hai
    }
    box[1] = l[1];
    for(int i=2;i<=n;i++){
        box[i] = l[i] + box[i-1] -r[i-1];
    }
    // now as all the coins are filled
    // we will check if boxes with
    // given min coins X
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