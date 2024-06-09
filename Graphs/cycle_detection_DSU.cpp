#include<iostream>
#include<vector>
#include <algorithm>
#include<list>
#include<unordered_set>
#include<climits>

    using namespace std;

        int find(vector<int> &parent, int x){

                if(parent[x] == x) return x;
               return  parent[x] = find(parent, parent[x]);
        }
      
    // getting O(log*n) i.e. almost constant time complexity

        bool Union(vector<int> &parent,vector<int> &rank, int a, int b){ 
            a =find(parent,a);
            b =find(parent,b);

            if(a == b) return true; // both are in the same set (imp condn)
            
           if(rank[a] >=rank[b]){
                rank[a]++;
                parent[b] = a;
                
           }
           else{

            rank[b]++;
            parent[a] = b;
              
           }

           return false;
        }

    int main(){
            int n,m;
            cin>>n>>m;
            //n -> no. of ele, m-> no of queries
            vector<int> rank(n+1,0);
           vector<int> parent(n+1);
            

            for(int i=0;i<=n;i++){
                parent[i] = i;
            }

            while(m--){
               int a,b;
               cin>>a>>b;
               bool ans = Union(parent,rank,a,b);
               if(ans == true) cout<<"Cycle Detected ";
            }
          
    }
   
     