#include<iostream>
using namespace std;
class Stack{//user defined data str
 public:
 int idx;
 //int val;
 int arr[5];
  Stack(){
    idx=-1;
  }
  void push(int val){
    if(idx==4){
        cout<<"stack is full ";
        return;
    }
    idx++;
    arr[idx]=val;
  }
  void pop(){
    if(idx==-1){
        cout<<"stack is empty "<<endl;
        return;
    }
    idx--;
  }
  int top(){
    if(idx==-1){
        cout<<"stack is empty !"<<endl;
        return -1;
    }
   return arr[idx];

  }
  int size(){
    return idx+ 1;
  }
  void display(){
    for(int i=0; i<=idx; i++){
      cout<<arr[i]<<" ";
    }
  }

};
int main(){
   Stack st;
   st.push(10);
   st.push(20);
    st.push(30);
     st.push(40);
      st.push(50);
       st.push(60);
    cout<<st.size()<<endl;
    //st.pop();
    
   cout<<st.size()<<" "<<st.top()<<endl;
   st.display();
}

