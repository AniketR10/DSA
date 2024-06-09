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
      int nsi[n];
      stack<int> st;
      st.push(n-1);
      nsi[n-1]=n;
        for(int i=n-2;i>0;i--){
            while(st.size()>0 && arr[st.top()]>arr[i]){
                st.pop();
            }
            if(st.size()==0) nsi[i]=n;
            else nsi[i]=st.top();
            st.push(i);
        }
 for(int i=0;i<n;i++){
    cout<<nsi[i]<<" ";
 }
cout<<endl;

}