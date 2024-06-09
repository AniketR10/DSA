#include<iostream>
#include<vector>
#include<queue>
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
    void inorder(Node* a, vector<int> &dec){
        if(!a) return;
        inorder(a->right,dec);
        dec.push_back(a->val);
        inorder(a->left, dec);
        
    }
    void preorder(vector<int>& dec, int &i, Node* root){
        if(!root) return;
        root->val= dec[i++];
        preorder(dec,i,root->left);
         preorder(dec,i,root->right);

    }
    void lvlOrder(Node* root){ //bfs
    queue<Node*> q;
    q.push(root);
    while(q.size()>0){
        Node* temp=q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left) q.push(temp->left);
         if(temp->right) q.push(temp->right);
    }
    cout<<endl;
    }
int main(){
    Node* a= new Node(10);
     Node* b= new Node(5);
      Node* c= new Node(16);
       Node* d= new Node(1);
        Node* e= new Node(8);
         Node* f= new Node(12);
          Node* g= new Node(20);
          a->left=b, a->right=c;
          b->left=d, b->right=e;
          c->left=f, c->right=g;
         vector<int> dec;
         inorder(a,dec);
        lvlOrder(a);
        int i=0;
         preorder(dec,i,a);
         lvlOrder(a);

//isi ka minheap khud se kryo





}