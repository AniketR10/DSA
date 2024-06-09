  #include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
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
vector<int> postIter(Node* root){
    stack<Node*> st;
    vector<int>v;
    st.push(root);
    while(st.size()>0){
      Node* temp= st.top();
      st.pop();
      v.push_back(temp->val);
      if(temp->left) st.push(temp->left);
        if(temp->right) st.push(temp->right);



    }
     reverse(v.begin(),v.end());
    
    return v;
}
 

   
int main(){
    Node *a =new Node(10);
    Node *b =new Node(20);
    Node *c =new Node(30);
    Node *d =new Node(40);
    Node *e =new Node(50);
    Node *f =new Node(60);
    Node *g =new Node(70);

     a->left=b;
        a->right=c;
          b->left=d;
          b->right=e;
          c->left=f;
          c->right=g;
          vector<int>v;
          v=postIter(a);
         
        for(int i=0;i<7;i++){
          cout<<v[i]<<" ";
        }

        

}