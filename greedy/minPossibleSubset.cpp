#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//sanket sir ke tarah code kr uski tc and sc jyada achi hai
   int minPossibleSubset(vector<int> &v){
    sort(v.begin(),v.end());
    int cn=0;
    int prod=1;
    for(int i=0;i<v.size();i++){
        if(v[i]<0) cn++;
    }
    if(v[0]>=0){
        if(v[0]!=0) return v[0];
        else return 0;
    }
    else{
        
            if(cn%2==0){
                for(int i=1;i<v.size();i++){
                    if(v[i]!=0) prod*=v[i];
                }
                
            }
                else{
                     for(int i=0;i<v.size();i++){
                    if(v[i]!=0) prod*=v[i];
                }
              

                }
        }
          return prod;
    }
   

int main(){
    vector<int>v={2,7,4,8};
    cout<<minPossibleSubset(v);



}