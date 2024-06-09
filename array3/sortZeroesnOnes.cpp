#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& v){
    for(int i=0; i<=v.size()-1;i++){
        cout<<v[i]<<" ";
        

    }
    cout<<endl;
    
}
 void sort(int noz, int noo, vector<int> &v){
    for(int i=0; i<=v.size()-1; i++){
        if(i<noz) v[i] = 0;
        else v[i] =1;

    
    // for(int i=noz; i<=v.size()-1; i++){
    //     v[i]=1;

    // }

 }
 }
int main(){
    vector<int>v;
    v.push_back(1);
     v.push_back(1);
      v.push_back(0);
       v.push_back(1);
        v.push_back(0);
         v.push_back(0);
          v.push_back(1);
          display(v);
        int noz=0;
        int noo=0;
        for(int i=0; i<=v.size()-1; i++){
            if(v[i]==0) noz++;
            else noo++;

        }
        sort(noz,noo, v);
        display(v);
        
}
//this was method one