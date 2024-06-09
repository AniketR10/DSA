#include<iostream>
#include<queue>
using namespace std;
void display(queue<int> &q){
for(int i=0;i<q.size();i++){
            cout<<q.front()<<" ";
            q.push(q.front());
            q.pop();

        }
        cout<<endl;
}
void  removeAtEvenIdx(queue<int>&q){
    int n=q.size();
    for(int i=0;i<n;i++){
        if(i%2==0){
        q.pop();
        }
        else{
            int x=q.front();
           q.pop();
            q.push(x);
             
        }
    }//ek or tarika hai dekh liyo ek baar

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
        removeAtEvenIdx(q);
        display(q);
}
