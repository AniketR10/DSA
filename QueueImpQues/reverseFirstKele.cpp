#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void revFirstK(queue<int> &q, int k){
    stack<int> st;
    int n=q.size();
    int l=k;
    while(l>0){
       int i=q.front();
        st.push(i);
        q.pop();
        l--;
    
     }
     while(st.size()>0){
        q.push(st.top());
        st.pop();
     }
    
    
    for(int i=1;i<=n-k;i++){
      
        q.push(q.front());
        q.pop();
        

    }


}
void display(queue<int> &q){
    int n=q.size();
    while(n>0){
        int k=q.front();
        cout<<k<<" ";
        q.push(k);
        q.pop();
        n--;

    }
    cout<<endl;
}
int main(){
    queue<int> q;
       q.push(10);
        q.push(20);
         q.push(30);
          q.push(40);
           q.push(50);
           cout<<q.size()<<endl;
           display(q);
            
            revFirstK(q, 3);
             display(q);




}