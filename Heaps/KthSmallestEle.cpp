//multiple methods hai but here heaps se karenge
//m1 : builtin sort
// m2 : selection sort
// m3 :quick select algo(one of best)
//m4: heap tc O(nlogk)
#include<iostream>
#include<queue>
using namespace std;
int main(){
    int arr[]={10,20,-4,5,18,24,1,-7,56};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=4;
    priority_queue<int> pq;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>k) pq.pop();
    }
    cout<<pq.top();
    
}
