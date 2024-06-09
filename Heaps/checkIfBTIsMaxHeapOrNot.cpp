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
   int isSize(Node* root){
        if(!root) return 0;
        return 1+ isSize(root->left) + isSize(root->right);
   }
    bool isCbt(Node* root){ 
        int size= isSize(root);
        int count=0;
    queue<Node*> q;
    q.push(root);
    while(count<size){
        Node* temp=q.front();
        q.pop();
        count++;
        if(temp){
            q.push(temp->left);
          q.push(temp->right);
        } 
    }
    while(q.size()>0){
        Node* temp=q.front();
        if(temp) return false;
        q.pop();
    }
    return true;
    }
    bool isMax(Node* a){
        if(!a) return true;
        if(a->left && a->val<a->left->val) return false;
        if(a->right && a->val<a->right->val) return false;
        return isMax(a->left) && isMax(a->right);
       
    }
int main(){
    Node* a= new Node(20);
     Node* b= new Node(15);
      Node* c= new Node(10);
       Node* d= new Node(8);
        Node* e= new Node(11);
         Node* f= NULL;
          Node* g= new Node(6);
          a->left=b, a->right=c;
          b->left=d, b->right=e;
          c->left=f, c->right=g;
         vector<int> dec;
        cout<<isMax(a)<<endl;
        cout<<isSize(a)<<endl;
        if(isCbt(a) && isMax(a)) cout<<"it is a maxHeap";
        else cout<<"it is not a max heap";


        





}