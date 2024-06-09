#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    Node* root;
    Node* right;
    Node* left;
    int val;
    Node(int val){
        this->val=val;
        this->right=NULL;
        this->left=NULL;

    }
  
};
      void display(Node* root){
        if(!root) return;
        cout<<root->val<<" ";
      display(root->left);
        display(root->right);
    }

    bool subtrees(Node* a, int &count, int lo, int hi){
        if(!a) return true;
       bool l= subtrees(a->left, count, lo, hi);
        bool r=subtrees(a->right, count, lo, hi);
        if(l && r && (a->val>=lo && a->val<=hi)){
            count++;
            return false;
        }
        return false;
       
        
    }
    int distFromroot(Node* root, int x){
        if(!root) return 0;
        if(root->val==x) return 0;
        else if(root->val>x) return 1+distFromroot(root->left, x);
         return 1+distFromroot(root->right, x);
    }
    int findingDist(Node* root, int i, int f){
        if(!root) return 0;
        if(root->val>i && root->val>f){
           return findingDist(root->left, i,f);
        }
        if(root->val<i && root->val<f){
           return findingDist(root->right, i,f);
        }
        if(i<=root->val && f>=root->val){
            return  distFromroot( root,  i)+ distFromroot( root,  f);
        }
        
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
            int lo=10, hi=40;
         display(a);
         int count=0;
         subtrees( a, count, lo, hi);
          cout<<count<<endl;
          cout<<findingDist(a, 10 ,50);

   
}
   