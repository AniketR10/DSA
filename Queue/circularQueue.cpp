#include<iostream>
#include<vector>
using namespace std;
class Queue{
    public:
    int f;
    int b;
    int s;
  vector<int> arr;
    Queue(int val){
        f=0;
        b=0;
        s=0;
        vector<int> v(val);
        arr=v;
    }
    void push(int val){
        if(b==arr.size()){
            cout<<"the queue is full ";
            return;
        } 
            arr[b]=val;
            b++;  
            s++;
        
}
    void pop(){
        if(f-b==0){
            cout<<"queue is empty ";
            return;
        }
            f++;  
            s--;
    }
    int front(){
        if(s==0){
            cout<<"queue is empty"<<endl;
            return -1;
        }
        return arr[f];
    }
    int back(){
        if(s==0){
            cout<<"queue is empty"<<endl;
            return -1;
        }
        return arr[b-1];
    }
    int size(){
        if(s==0){
            cout<<"queue is empty"<<endl;
            return -1;
        }
        return b-f;
    }
    bool empty(){
        if(size()==0){
            return true;
        }
        else return false;
    }
    void display(){
         for(int i=f;i<b;i++){
            cout<<arr[i]<<" ";
         }
         cout<<endl;
    }



};


int main(){
   Queue q(5); 
    q.push(10);
     q.push(20);
      q.push(30);
       q.push(40);
        q.push(50);
         q.push(60);
        cout<<q.size()<<endl;
        q.display();
         q.pop();
         q.display();
          cout<<q.size()<<endl;
         
       
}