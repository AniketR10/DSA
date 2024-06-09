#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node *next;
    Node(int val){
        this->val=val;
        this->next=NULL;

    }
};
class LinkedList{
    public:
    Node *head;
    Node *tail;
    int size;
     LinkedList(){
        head=tail=NULL;
        size=0;
     }
     void insertBegin(int val){
        Node *temp= new Node(val);
     if(size==0) head=tail=temp;
     else {
        temp->next=head;
        head=temp;
     }
     size++;
     }
     void insertEnd(int val){
    Node *temp= new Node(val);
    if(size==0) head=tail=temp;
    else{
        tail->next=temp;
        tail=temp;
    }
    size++;
     }
     void display(){
      Node *temp=head;
            while(temp!=NULL){
                cout<<temp->val<<" ";
                temp=temp->next;
            }
            cout<<endl;
     }
     void insertIdx(int val,int idx){
        if(idx==0) {
            insertBegin(val);
            return;
        }
        else if(idx==size){
            insertEnd(val);
            return;
        }
        else if(idx<0 || idx>size) cout<<"Invalid index"<<endl;
        else{
            Node *t= new Node(val);
         Node *temp= head;
            for(int i=1; i<=idx-1; i++){
                temp=temp->next;
            }
            t->next=temp->next;
            temp->next=t;
            size++;

        }
         
     }
    int getIdx(int idx){
        if(idx==0) return head->val;
        else if(idx==size-1) return tail->val;
        else if(idx<0 || idx>size-1) {
            cout<<"invalid index"<<endl;
            return -1;
        }
        else{
            Node *temp=head;
            for(int i=1; i<=idx; i++){
                temp=temp->next;
            }
            return temp->val;
            
            
        }
    }
   void deleteIdx(int idx){
    if(idx<0 || idx>size-1){
        cout<<"invalid index"<<endl;

    }
    else if(idx==0) {
        deleteHead();
        return;
    }
    //else if(idx==size-1)tail se delete wali function
    else{
            Node *temp=head;
        for(int i=1; i<=idx-1; i++){
            temp=temp->next;
        }
        temp->next=temp->next->next;

        
        size--;

    }

    }
    void deleteHead(){
        if(size==0) cout<<"list is empty"<<endl;
        head=head->next;
        size--;
    }

     
     

};
//delete at tail ko khudse krliyo
int main(){
    LinkedList ll;
    ll.insertBegin(40);
    ll.insertBegin(30);
    ll.insertBegin(20);
    ll.display();
    ll.insertBegin(10);
    ll.display();
    cout<<ll.size<<endl;
    ll.insertIdx(50,1);
      ll.display();
      cout<<ll.size<<endl;
    cout<<ll.getIdx(3)<<endl;
    //ll.deleteHead();
    //ll.display();
    ll.deleteIdx(2);
        ll.display();





}