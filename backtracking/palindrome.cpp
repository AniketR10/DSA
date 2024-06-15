#include<bits/stdc++.h>
#include<cmath>
using namespace std;

bool check(int num){
    int inum =num;
    int rnum =0;
    while(inum){
        rnum = rnum*10 + inum%10;
        inum/=10;
    }
    if(rnum == num ) return true;
    return false;
}

void f(int n, int num, vector<int>& ans){
    while(num> pow(10,n-1)){
        if(check(num)){
            ans.push_back(num);
        }
        num-=1;
    }
    
}

int main(){
    int n;
    cin>>n;

 int num = pow(10,n) -1;

    vector<int> ans;
    f(n,num,ans);

    for(int i=0; i<ans.size();i++){
        cout<<ans[i]<<" ";
    }


}