#include<bits/stdc++.h>

using namespace std;

// void f(string input, string output){
//     if(input.size() == 0){
//         cout<<output<<"\n";
//         return;
//     }
   
//    for(int i=0;i<input.size();i++){
//         char ch=input[i];
//         string left = input.substr(0,i);
//         string right = input.substr(i+1);
//         string ros = left + right;
//         f(ros, output + ch);

//    }

// } this was brute force method not time and space optimised

void f(string &str, int i){
    if(i== str.size()-1){
        cout<<str<<"\n";
        return;
    }

    unordered_set<int> s; // for avoiding the repetition of sets
    for(int idx =i;idx<str.size();idx++){
        if(s.count(str[idx])) continue; //pruning step1

        s.insert(str[idx]); //pruning step1
        swap(str[idx], str[i]);
        f(str,i+1);
        swap(str[idx], str[i]); // step 2 reverting

    }
}
   

int main(){

    //f("abc","");

        string str= "aba";
   f(str,0);
   



}