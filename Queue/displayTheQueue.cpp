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
int main(){
    queue<int> q;
        q.push(10);
        q.push(20);
        q.push(30);
        q.push(40);
        q.push(50);
        cout<<q.size()<<endl;
        display(q);
        
}