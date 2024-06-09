#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[]={2,1,5,6,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
      int psi[n];
      stack<int> st;
      st.push(0);
      psi[0]=-1;
        for(int i=1;i<n;i++){
            while(st.size()>0 && arr[st.top()]>arr[i]){
                st.pop();
            }
            if(st.size()==0) psi[i]=-1;
            else psi[i]=st.top();
            st.push(i);
        }
 for(int i=0;i<n;i++){
    cout<<psi[i]<<" ";
 }
cout<<endl;

}