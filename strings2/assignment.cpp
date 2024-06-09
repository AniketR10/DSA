//q2 and q5
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>

using namespace std;
int main(){
  
        string str="proud to be a pwian ";
        string word="";
        string maxword="";
        int n=str.size();
        for(int i=0; i<=n-1; i++){
          if(str[i] ==' '){
            
            maxword= max(maxword, word);
            word="";
          } 
          else word += str[i];
        }
        cout<<maxword;

      }
    
   
