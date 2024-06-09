#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
 string removeDup(string s){
    stack<char>st;
    st.push(s[0]);
    for(int i=1; i<s.size();i++){
       if(s[i]==s[i-1]) continue;
       else{
        st.push(s[i]);
       }

    }
    s="";
    while(st.size()>0){
        s+=st.top();
        st.pop();
    }
    reverse(s.begin(),s.end());
    return s;
 }
int main(){
    string s="aaabbcddaabffg";
    cout<<s<<endl;
    s=removeDup(s);
    cout<<s<<endl;




}