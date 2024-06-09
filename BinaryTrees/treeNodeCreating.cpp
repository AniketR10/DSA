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
  void display(Node* root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
    }
    int sum(Node* root){
                if(root==NULL) return 0;
        int suma=root->val+sum(root->left)+ sum(root->right);
                return suma;

    }
    int TreeSize(Node* root){
        if(root==NULL) return 0;
            int ans=1 +TreeSize(root->left)+ TreeSize(root->right);
            return ans;
    }
    int maxVal(Node* root){
        if(root==NULL) return INT_MIN;
            int ans= max(root->val, max(maxVal(root->left),maxVal(root->right)));
            return ans;
    }
    int noOfLvls(Node* root){
        if(root==NULL) return 0;
        int ans=1+max(noOfLvls(root->left), noOfLvls(root->right));
        return ans;
    }
    int prod(Node* root){
        if(root==NULL) return 1;
       int ans=root->val*prod(root->left)*prod(root->right);
       return ans;
    }
    int minVal(Node* root){
        if(root==NULL) return INT_MAX;
        int ans=min(root->val,min(minVal(root->left),minVal(root->right)));
        return ans;
    }

int main(){
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
          display(a);
          cout<<endl;
          cout<<sum(a)<<endl;
          cout<<TreeSize(a)<<endl;
          cout<<maxVal(a)<<endl;
          cout<<noOfLvls(a)<<endl;
          cout<<prod(a)<<endl;
          cout<<minVal(a)<<endl;



   


}