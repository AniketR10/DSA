#include<iostream>
#include<queue>
#include<climits>
#include<unordered_map>
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
   
    Node* construct(int arr[], int n){
        queue<Node*> q;
        Node* root = new Node(arr[0]);
        q.push(root);
        int i=1;
        int j=2;
        while(q.size()>0 && i<n){
            Node* temp=q.front();
            q.pop();
            Node* l;
            Node* r;
            if(arr[i]!=INT_MIN) l=new Node(arr[i]);
            else l=NULL;
            if(j!=n && arr[j]!=INT_MIN) r=new Node(arr[j]);
            else r=NULL;

            temp->left=l;
            temp->right=r;

            if(l!=NULL) q.push(l);
             if(r!=NULL) q.push(r);

             i+=2;
             j+=2;
        }
        return root;
    }
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
   void leftBoundary(Node* root){
        if(!root) return;
        if(!root->left && !root->right) return;
        cout<<root->val<<" ";
        leftBoundary(root->left);
        if(!root->left) leftBoundary(root->right);

   }
   void leafNode(Node* root){
    if(!root) return;
    if(!root->left && !root->right) cout<<root->val<<" ";
    leafNode(root->left);
      leafNode(root->right);

   }
   void rightBoundary(Node* root){
    
        if(!root) return;
        if(!root->left && !root->right) return;
       
        rightBoundary(root->right);
        if(!root->right) rightBoundary(root->left);
         cout<<root->val<<" ";

   }
   //yaha se asli code start hai baaki toh upar pichla wala hai
    void topOrder(Node* root){
        unordered_map<int, int> m; //<level, root->val>
        queue<pair<Node*,int>> q;
        pair<Node*, int> r;
        r.first=root;
        r.second=0;
        q.push(r);
        while(q.size()>0){
              Node* temp= (q.front()).first;
        int level=(q.front()).second;
        q.pop();
        
        m[level]=temp->val;
        if(temp->left){
            pair<Node*, int> p;
            p.first=temp->left;
            p.second=level-1;
            q.push(p);
        }
         if(temp->right){
            pair<Node*, int> p;
            p.first=temp->right;
            p.second=level+1;
            q.push(p);
        }

        }
       vector<int>ans;
        for(auto x : m){
           ans.push_back(x.second);
        }
     for(auto x: ans) cout<<x<<" ";
        cout<<endl;

    }
     
int main(){
    int arr[]={20,8,22,5,3,4,25,INT_MIN,INT_MIN,10,14,INT_MIN,INT_MIN,INT_MIN,INT_MIN};
    int n=sizeof(arr)/sizeof(arr[0]);
    Node* root = construct(arr,n);
       lvlOrder(root);
       topOrder(root);
     
}