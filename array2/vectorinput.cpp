#include<iostream>
#include<vector>
using namespace std;
//how to take input in vectors
int main(){
    vector<int> v;
      for(int i=0; i<5; i++){
        int x;
        cin>>x;
        v.push_back(x);
      }
      for(int i=0; i<5; i++){
        cout<<v[i]<<" ";
      }

}