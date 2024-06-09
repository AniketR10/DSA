#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v){
    for(int i=0; i<=v.size()-1; i++){
        cout<<v[i]<<" ";

    }
    cout<<endl;
}
void reverse(int i, int j, vector<int> &v){
     
  while(i<=j){
    int temp= v[i];
    v[i]= v[j];
    v[j]= temp;
    i++;
    j--;
}
return;
}
int main(){
    vector<int>v;
    int k;
    cout<<"enter the k ";
    cin>>k;
    
    int a;
    cout<<"enter the size ";
    cin>>a;
    cout<<"enter elements ";
    if(k>a) k %=a;
    int n;

    for(int i=0; i<=a-1; i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    display(v);
    

    reverse(0, a-k-1 ,v);
    reverse(a-k, a-1,v);
    reverse(0, a-1, v);
    display(v);
  
  }



