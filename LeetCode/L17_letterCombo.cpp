#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> ans;
    void f(int n, string &digits, int idx, string &res,  vector<string>& combo){
        
        if(idx>=n){
            ans.push_back(res);
            return;
        }
           int dig =digits[idx] -'0';
        for( auto c :combo[dig]){
                res.push_back(c);
                f(n,digits,idx+1,res,combo);
                res.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {

        int n =digits.size();
        if( n ==0 ) return {};
        vector<string> combo={"NA"," ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        string res="";

       f(n,digits,0,res,combo);
       return ans;

    }
};