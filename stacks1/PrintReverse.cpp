//idhar pe hame revrese values dusre stack mein nahi priint krni hai
//balki usi stack mein honi chiaye hence for that we will use extra stack
#include<iostream>
#include<stack>
using namespace std;
void print(stack<int> st){
    stack<int> temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
}
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    print(st);

    stack<int> st2;
    while(st.size()>0){
        st2.push(st.top());
        st.pop();
    }
    stack<int> st3;
    while(st2.size()>0){
        st3.push(st2.top());
        st2.pop();
    }
    while(st3.size()>0){
        
        st.push(st3.top());
        
        st3.pop();
    }
    cout<<endl;
    print(st);

}
//or u can  use vector for it khud krke dekh 
//and there is also a recursive way
