#include<iostream>
#include<climits>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;

    }
  
};
  void nThlevel(Node* root, int lvl, int n){
    if(root==NULL) return; 
   if(lvl==n) {
         cout<<root->val<<" "; 
         return;
   }
    nThlevel(root->left, lvl+1,n);
    nThlevel(root->right, lvl+1,n);
   
   
  }
   void nThlevelRev(Node* root, int lvl, int n){
    if(root==NULL) return; 
   if(lvl==n) {
         cout<<root->val<<" "; 
         return;
   }
    nThlevelRev(root->right, lvl+1,n);
    nThlevelRev(root->left, lvl+1,n);
   }
  int lvl(Node* root){
    if(!root) return 0;
    int ans=1+ max(lvl(root->left),lvl(root->right));
  }
   void lvlOrder(Node* root){
    int n=lvl(root);
    for(int i=1;i<=n;i++){
        nThlevel(root, 1,i);
        cout<<endl;
    }
   }
int main(){
      int level=3;
    Node* a=new Node(1); // root node
     Node* b=new Node(2);
      Node* c=new Node(3);
       Node* d=new Node(4);
        Node* e=new Node(5);
         Node* f=new Node(6);
          Node* g=new Node(7);
          a->left=b;
          a->right=c;
          b->left=d;
          b->right=e;
          c->left=f;
          c->right=g;
          nThlevel(a, 1, 3);
          cout<<endl;
          cout<<lvl(a);
          cout<<endl;
         lvlOrder(a);
          cout<<endl;
           
          //level order ttraversal

        
        
         


}