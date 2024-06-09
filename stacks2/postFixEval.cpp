#include<iostream>
#include<stack>
using namespace std;
int solve(int a,int b,char ch){
   if(ch=='+') return a+b;
  else if(ch=='-') return a-b;
  else if(ch=='*') return a*b;
   else return a/b;

}
int main(){
    string s="79+4*8/3-";
    stack<int> st;
    for(int i=0;i<s.size();i++){
        if(s[i]>=48 && s[i]<=57){
            st.push(s[i]-48);
        }
        else{
                int val2=st.top();
                st.pop();
                int val1=st.top();
                st.pop();
                int ans=solve(val1,val2,s[i]);
                st.push(ans);
                }

                }
                cout<<st.top()<<endl;
                
            
        
    }
