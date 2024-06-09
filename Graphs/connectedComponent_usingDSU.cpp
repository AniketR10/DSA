#include<bits/stdc++.h>

using namespace std;
// here we are implementing dsu by size
// by rank bhi bahut easy hai krke dekhyo

vector<int> parent;
  vector<int> size;

  int v;
        int find(int x){ // finding and assigning the parent

            if(parent[x] == x) return x;
          return  parent[x] = find(parent[x]);

        }

  

        void Union(vector<int>& size, int a, int b){
            a=find(a); //converting them to their parent values
            b =find(b);
            
            if(size[a]>size[b]){
                size[a]+=size[b];
                parent[b] =a;
            }
            else{
                size[b]+=size[a];
                parent[a] =b;
            }

        }
     int main(){
      
        cin>>v; // no. of elements or vertices
        int e;// no. of queries
        cin>>e;
        parent.resize(v);
      size.resize(v,0);
      

        for(int i=0;i<v;i++){
            size[i] =1;
        }

        for(int i=0;i<v;i++){
            parent[i] =i;
        }

        while(e--){
            string str;
            cin>>str;
           if(str == "union"){
             int curr,des;
            cin>>curr>>des;
            Union(size,curr,des);
           }
           else if(str == "find"){
            int a;
            cin>>a;
            cout<<find(a)<<"\n";
           }

        }

        unordered_set<int> unique_parents;

    for (int i = 0; i < v; i++) {
        unique_parents.insert(find(i));
    }

    cout << unique_parents.size() << endl;

          
       
    }
