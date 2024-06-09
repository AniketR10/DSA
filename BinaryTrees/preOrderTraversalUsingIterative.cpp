#include<iostream>
#include<stack>
using namespace std;
class Node{
    public:
    int val;
    Node* root;
    Node* left;
    Node* right;

    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
   

};

 void preOrderIter(Node* root){
    stack<Node*> st;
    st.push(root);
    while(st.size()>0){
        Node* temp= st.top();
        cout<<temp->val<<" ";
        st.pop();
        if(temp->right) st.push(temp->right);
        if(temp->left) st.push(temp->left);
         
    }
    cout<<endl;
 }
 
  
int main(){
    Node *a =new Node(10);
    Node *b =new Node(20);
    Node *c =new Node(30);
    Node *d =new Node(40);
    Node *e =new Node(50);
    Node *f =new Node(60);
    

     a->left=b;
        a->right=c;
          b->left=d;
          b->right=e;
          c->left=f;
        
        preOrderIter(a);
}