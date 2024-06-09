#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>v,int n){
    for(int i=0; i<=n-1; i++){
       cout<<v[i]<<" ";
    }
    cout<<endl;
}
void sort(vector<int> &v, int n){
    int i=0;
    int j=n-1;
    while(i<j){
        if(v[i]==0 && v[j] !=0) {
            int temp= v[i];
            v[i]=v[j];
            v[j]=temp;
            i++;
            j--;
        }
        if(v[i] !=0 && v[j]==0){
            i++;
            j--;
        }
    } 
    return;

}
int main(){
    vector<int>v;
    int n =5;
    

    cout<<"enter the elements";
    for(int i=0; i<=n-1; i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    display(v,n);
     sort(v,n);
     display(v,n);
    
}