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
    string s="-/*+79483";
    stack<int> st;
    for(int i=s.size()-1;i>=0;i--){//reverse loop
        if(s[i]>=48 && s[i]<=57){
            st.push(s[i]-48);
        }
        else{
                int val1=st.top();
                st.pop();
                int val2=st.top();
                st.pop();
                int ans=solve(val1,val2,s[i]);
                st.push(ans);
                }

                }
                cout<<st.top()<<endl;
                
            
        
    }