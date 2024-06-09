#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node *next;
    Node* prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;

    }
};
class Deque{
public:
    Node *head;
    Node *tail;
    int size;
     Deque(){
        head=tail=NULL;
        size=0;
     }
     void pushFront(int val){
        Node *temp= new Node(val);
     if(size==0) head=tail=temp;
     else {
        temp->next=head;
        head->prev=temp;//xtra
        head=temp;
     }
     size++;
     }
     void pushBack(int val){
    Node *temp= new Node(val);
    if(size==0) head=tail=temp;
    else{
        tail->next=temp;
        temp->prev=tail;//xtra
        tail=temp;
    }
    size++;
     }
    
    void popFront(){
        if(size==0) {
            cout<<"list is empty"<<endl;
            return;
        }
        head=head->next;
      if(head!=NULL)  head->prev=NULL;//xtra
      if(head==NULL) tail=NULL;//xtra
        size--;
    }
    void popBack(){
        if(size==0){
            cout<<"list is empty";
            return;
        }
        else if(size==1){
            popFront();
            return;
        }
        Node* temp=tail->prev;
        temp->next=NULL;
        tail=temp;
        size--;
        

    }

     int front(){
        if(size==0) {
            cout<<"queue is empty";
            return -1;
        }
        return head->val;
    }
    int back(){
         if(size==0) {
            cout<<"queue is empty";
            return -1;
        }
        return tail->val;

    }
     void display(){
        Node *temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;

    }

};
//delete at tail ko khudse krliyo
int main(){
   Deque dq;
   dq.pushBack(10);
   dq.pushBack(20);
   dq.pushBack(30);
   dq.pushBack(40);
   dq.display();
   dq.popBack();
   dq.display();
   dq.display();
   dq.pushFront(50);
   dq.display();
   cout<<dq.front()<<endl;
   cout<<dq.back();






}