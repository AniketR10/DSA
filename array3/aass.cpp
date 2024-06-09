#include <iostream>
#include<vector>
using namespace std;
void display(vector<int>v){
    for(int i=0; i<=v.size()-1; i++){
        cout<<v[i];
    }
    cout<<endl;
}
int reversepart(int i, int j, vector<int>&a){
    while(i<j){
    int temp= a[i];
    a[i]=a[j];
    a[j]= temp;
    i++;
    j--;
    }

}
int main(){
    vector<int>v;
    int k;
    cout<<"enter the value of k";
    cin>>k;
    int n;
    cout<<"enter the size ";
    cin>>n;
    cout<<"enter the elements ";
    for(int i=0; i<=n-1; i++){
        int q;
        cin>>q;
        v.push_back(q);


    }
    if(k>n) k %=n;
display(v);
reversepart(0, n-k-1, v);
reversepart(n-k, n-1,v);
reversepart(0,n-1,v);
display(v);


}





