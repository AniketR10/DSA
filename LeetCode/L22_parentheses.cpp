#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> ans;
    void f(int n, string &res,int p1, int p2){
        if(p2> p1) return;
        if(p1>n or p2 >n) return;
        if(p1== p2 and p1 == n and p2 == n){
            ans.push_back(res);
            return;
        }

            res.push_back('(');

            f(n,res,p1+1,p2);
            res.pop_back();
    
            res.push_back(')');
            
            f(n,res,p1,p2+1);
            res.pop_back();

    }


    vector<string> generateParenthesis(int n) {
        string res="";
        f(n,res,0,0);
        return ans;

    }
};