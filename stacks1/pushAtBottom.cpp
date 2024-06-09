#include<iostream>
#include<stack>
using namespace std;
void print(stack<int> st){
    stack<int> temp;
     while(st.size()>0){
        cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();

    }
    while(temp.size()>0){
        
        st.push(temp.top());
        temp.pop();

    }
    cout<<endl;
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    print(st);
    stack<int>st2;
    while(st.size()>0){
        
        st2.push(st.top());
        st.pop();

    }
    st2.push(60);
    while(st2.size()>0){
        st.push(st2.top());
        st2.pop();

    }
    print(st);

}
