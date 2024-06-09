#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long int
using namespace std;
        bool cmp( int a, int b){
            return a>b;
        }
    int minCost(int n, int m, vector<ll> &horizontal, vector<ll> &vertical){
        sort(vertical.begin(), vertical.end(),cmp);
         sort(horizontal.begin(), horizontal.end(), cmp);
         int v=1;
         int hz=1;
            int i=0, j=0;
         ll cost=0;
         while(i<vertical.size() and j<horizontal.size()){
                if(vertical[i]>horizontal[j]){
                    cost+=vertical[i]*v;
                    i++,hz++;
                }
                else{
                    cost+=horizontal[j]*hz;
                    j++,v++;
                }
         }
         while(i<vertical.size()){
              cost+=vertical[i]*v;
                    i++,hz++;
         }
         while(j<horizontal.size()){
             cost+=horizontal[j]*hz;
                    j++,v++;
         }
         return cost;
    }
int main(){
    int n,m;
    printf("enter the values of n and m");
    cin>>m>>n;
    vector<ll> horizontal, vertical;
    for(int i=0;i<m-1;i++){
        int x;
        cin>>x;
        vertical.push_back(x); 
    }
     for(int i=0;i<n-1;i++){
        int y;
        cin>>y;
        horizontal.push_back(y); 
    }
        cout<<minCost(n,m, horizontal, vertical);
}

  
  

