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
class Dll{
public:
    Node *head;
    Node *tail;
    int size;
     Dll(){
        head=tail=NULL;
        size=0;
     }
     void insertBegin(int val){
        Node *temp= new Node(val);
     if(size==0) head=tail=temp;
     else {
        temp->next=head;
        head->prev=temp;//xtra
        head=temp;
     }
     size++;
     }
     void insertEnd(int val){
    Node *temp= new Node(val);
    if(size==0) head=tail=temp;
    else{
        tail->next=temp;
        temp->prev=tail;//xtra
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
            t->prev=temp;//xtra
            t->next->prev=t;//xtra
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
            if(idx<size/2){
                Node *temp=head;
            for(int i=1; i<=idx; i++){
                temp=temp->next;
            }
            return temp->val;
            }
            else{
                Node* temp=tail;
                for(int i=1; i<size-idx;i++){
                    temp=temp->prev;
                }
                return temp->val;
            }
            
            
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
        temp->next->prev=temp;//xtra

        
        size--;

    }

    }
    void deleteHead(){
        if(size==0) {
            cout<<"list is empty"<<endl;
            return;
        }
        head=head->next;
      if(head!=NULL)  head->prev=NULL;//xtra
      if(head==NULL) tail=NULL;//xtra
        size--;
    }
    void deleteTail(){
        if(size==0){
            cout<<"list is empty";
            return;
        }
        else if(size==1){
            deleteHead();
            return;
        }
        Node* temp=tail->prev;
        temp->next=NULL;
        tail=temp;
        size--;
        

    }

     
     

};
//delete at tail ko khudse krliyo
int main(){
    Dll ll;
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
        ll.insertEnd(100);
        ll.display();
       cout<<ll.getIdx(3);
        






}