#include<iostream>
using namespace std;
class Node{//linked list node
    public:
        int val;
        Node *next;
         Node(int x){
            val=x;
            this->next=NULL;
         }
        
    };
    void display(Node *head){
        Node *temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;

    }
    //printing the size of the ll
    int size(Node *head){
        int n=0;
        //Node *temp=head; no need ad a is paas by value to head
        while(head!=NULL){
            head=head->next;
            n++;
        }
        return n;

    }
    void displayRec(Node *head){
        if(head==NULL) return;
        cout<<head->val<<" ";
        display(head->next);

    }
    void insertEnd(Node *head){
        Node *t=new Node(60);
        while(head->next!=NULL){
            head=head->next;
        }
        head->next=t;

    }
int main(){
    Node *a= new Node(10);
    Node *b=new Node(20);
    Node *c= new Node(30);
    Node *d= new Node(40);
    Node *e=new Node(50);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    Node *temp=a;
     while(temp!=NULL){
            cout<<temp->val<<" ";
            temp= temp->next;
            
     }
     cout<<endl;
     //or
    display(a);
    //displayRec(a);// displaying values thru recursion
      insertEnd(a);//jab hame tail ke baare me na pata ho
    display(a);
     cout<<size(a);



    
}