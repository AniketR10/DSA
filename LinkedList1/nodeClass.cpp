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
int main(){
    Node a(10);
     Node b(20);
     Node c(30);
     Node d(40);  
 a.next=&b;
 b.next=&c;
 c.next=&d;
 //d.next=NULL;
 (a.next)->val=100;
     cout<<(*(a.next)).val<<endl;//or a.next->val;
     cout<<a.next->next->next->val<<endl;
     //or *(*((*((a.next)).next)).next)).val;
    //or
    Node temp=a;
    while(1){
        cout<<temp.val<<" ";
        if(temp.next ==NULL) break;
        temp= *(temp.next);
          
    }


    
}