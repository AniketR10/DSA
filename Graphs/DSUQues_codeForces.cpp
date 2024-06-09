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

        void Union(vector<int> &parent,vector<int> &rank, int a, int b, vector<int> &size, vector<int> &minEle, vector<int> &maxEle){ 
            a =find(parent,a);
            b =find(parent,b);
            if(a == b) return; // both are in the same set (imp condn)
            
           if(rank[a] >=rank[b]){
                rank[a]++;
                parent[b] = a;
                  size[a] += size[b];
                minEle[a] = min(minEle[a],minEle[b]);
                maxEle[a] = max(maxEle[a], maxEle[b]);
           }
           else{

            rank[b]++;
            parent[a] = b;
               size[b] += size[a];
                minEle[b] = min(minEle[b],minEle[a]);
                 maxEle[b] = max(maxEle[b], maxEle[a]);
           }
        }

    int main(){
            int n,m;
            cin>>n>>m;
            //n -> no. of ele, m-> no of queries
            vector<int> parent(n+1);
            vector<int> rank(n+1,0);
            vector<int>size(n+1,1);
             vector<int>minEle(n+1);
              vector<int>maxEle(n+1);

            for(int i=0;i<=n;i++){
                parent[i] = minEle[i] = maxEle[i] = i;
            }

            while(m--){
                string str;
                cin>>str;
                if(str == "union"){
                    int a,b;
                    cin>>a>>b;
                    Union(parent,rank,a,b,size, minEle, maxEle);
                    
                }
                else if(str == "get"){                    
                    int x;
                    cin>>x;
                  int  a =find(parent,x);
                   cout<<minEle[parent[x]]<<" "<<maxEle[parent[x]]<<" "<<size[parent[x]]<<"\n";
                   // yahan pe parent[x] ki jagah pe hm a bhi use kr dkte hai
                }
            }
          
    }
   
     