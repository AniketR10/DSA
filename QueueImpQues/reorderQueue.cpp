#include<iostream>
#include<queue>
#include<stack>
using namespace std;
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
void reOrder(queue<int> &q){
    int n=q.size();
         stack<int> st;
         while(n>0){
            st.push(q.front());
            q.pop();
            n--;
         }
         while(st.size()>0){
            q.push(st.top());
            st.pop();
         }
         int k=q.size()/2;
         while(k>0){
             st.push(q.front());
            q.pop();
            k--;
         }
          while(st.size()>0){
            q.push(st.top());
            st.pop();
         }
         k=q.size()/2;
         while(k>0){
             st.push(q.front());
            q.pop();
            k--;
         }
         while(st.size()>0){
            q.push(st.top());
            st.pop();
            q.push(q.front());
            q.pop();
         }

}

int main(){
    queue<int> q;
       q.push(1);
        q.push(2);
         q.push(3);
          q.push(4);
           q.push(5);
            q.push(6);
             q.push(7);
              q.push(8);
               q.push(9);
                q.push(10);
            
           display(q);
           reOrder(q);
           display(q);

           


}
