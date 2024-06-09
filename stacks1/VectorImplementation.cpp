#include<iostream>
#include<vector>
using namespace std;
class Stack{//user defined data str
 public:
 vector<int>v;  //no overflow condn
 int val;
 
 Stack(){

 }
 
  
  void push(int val){
    
    v.push_back(val);
  
  }
  void pop(){
    if(v.size()==0){
        cout<<"stack is empty "<<endl;
        return;
    }
    v.pop_back();
  }
  int top(){
    if(v.size()==0){
        cout<<"stack is empty !"<<endl;
        return -1;
    }
   return v[v.size()-1];

  }
  int size(){
    return v.size();
  }

};
int main(){
   Stack st;
 cout<<st.size()<<endl;
 st.top();
   st.push(10);
   st.push(20);
    st.push(30);
     st.push(40);
      st.push(50);
       st.push(60);
    cout<<st.size()<<endl;
    st.pop();
    
   cout<<st.size()<<" "<<st.top()<<endl;
}