#include<bits/stdc++.h>
#include<string>
#include<vector>

 using namespace std;
 // gfg ka hai ye ques, copy paste kiya hai
class Solution{
    public:
    bool comparePrevChar(string &s1, string &s2){
        int len =min(s1.size(),s2.size());
        for(int i=0;i<len;i++){
            if(s1[i] == s2[i]) continue;
            else return false;
        }
        return true;
    }
     vector<list<int>> graph;
       void topo(vector<int>& ans){
            vector<int> inDegree(graph.size(),0);
           
            queue<int>q;
            
            for(int i=0;i<inDegree.size();i++){
                for(auto neighbour : graph[i]){
                    inDegree[neighbour]++;
                }
            }
            
            
            for(int i=0;i<inDegree.size();i++){
                if(inDegree[i] == 0){
                    q.push(i);
                    ans.push_back(i);
                   
                }
            }
            while(!q.empty()){
                auto curr = q.front();
                q.pop();
                ans.push_back(curr);
                for(auto neighbour:graph[curr]){
                    inDegree[neighbour]--;
                    
                    if(inDegree[neighbour] == 0){
                        q.push(neighbour);
                       
                    }
                }
            }
            return;
            
        }
    string findOrder(string dict[], int N, int K) {
       graph.resize(K);
       
       if(N == 1) return dict[0]; // only one word is there
       string s =" ";
       
       vector<int> ans;
        for(int i=0;i<N-1;i++){
            string s1= dict[i];
            string s2 =dict[i+1];
            int len =min(s1.size(),s2.size());
            
            if(s1.size()>s2.size() and comparePrevChar(s1,s2)) return s; // invalid string case
            
            for(int j=0;j<len;j++){
                if(s1[j] != s2[j]){
                    graph[s1[j] - 'a'].push_back(s2[j] - 'a');
                    break; 
                }
            }
           
        }
        topo(ans);
        
       for(auto it :ans){
           s =s + char(it + 'a');
       }
       return s;
    }
};