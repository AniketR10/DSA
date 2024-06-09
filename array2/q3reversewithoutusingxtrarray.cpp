#include<iostream>
#include<vector>

using namespace std;
void display(vector<int> &a){
    for(int i=0; i<=a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
}
void reversepart(int m, int n, vector<int> &e){
     
     
    while(m<=n){
        int temp=e[m];
        e[m]=e[n];
        e[n]=temp;
        m++;
        n--;
        
    }
}
int main(){
    vector<int>v;
    int n;
    cout<<"enter size ";
    cin>>n;
    cout<<"enter the elements ";
    int i;
    for( i=0; i<=n-1; i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    display(v);
    //reverse
    vector<int>v2;
    int b=0;
    int j= v.size()-1;
     while(b<=j){ //while ki jagah for(int b=0, j=v.size()-1;i<=j;i++;j--)
         int temp= v[b];
         v[b]= v[j];
         v[j]= temp;
         b++;
         j--;
     }
   
    cout<<endl;
    display(v);
    cout<<endl;
    reversepart(0,2,v);
    display(v);
    
    //reversepart is important
    //yeh sab easily reverse fun se ho skti hain but baad mein

}