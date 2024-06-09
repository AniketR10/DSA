#include<iostream>
using namespace std;
class minHeap{
    public:
    int arr[50];//we can initialise only array inside and nothing else
    //baaki sabke liye constructor banana padega
    int idx;
    minHeap(){
        idx=1;
    }
    int top(){
        return arr[1];
    }
    
    void push(int x){
        arr[idx]=x;
        int i=idx;
        idx++;
        while(i!=1){
            if(arr[i]<arr[i/2]) swap(arr[i],arr[i/2]);
            else break;
            i=i/2;
        }

    }
    int size(){
        return idx-1;
    }
    void pop(){
        int nidx= --idx;
        int i=nidx;
          arr[0]=arr[i];
          i=0;
        while(i<nidx){
            if(2*i>nidx) break;
            if(2*i+1>nidx){
                //check for left
                  if(arr[i]>arr[2*i]){
                     swap(arr[i],arr[2*i]);
                i = 2*i;
                }
                 break;
            }
            if(arr[2*i+1]<arr[2*i]) {
                if(arr[i]>arr[2*i+1]){
                     swap(arr[i],arr[2*i+1]);
                i=(2*i+1);
                }
                else break;
               
            }
            else {
                if(arr[i]>arr[2*i]){
                     swap(arr[i],arr[2*i]);
                i = 2*i;
                }
                else break;
               
            }

        }
    }
    void display(){
        for(int i=1;i<=idx-1;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};
int main(){
    minHeap pq;
    pq.push(10);
     pq.push(20);
      pq.push(11);
      cout<<pq.size()<<" "<<pq.top()<<endl;
       pq.push(4);
        pq.push(19);
        cout<<pq.size()<<" "<<pq.top()<<endl;
        pq.display();
       pq.pop();
         cout<<pq.size()<<" "<<pq.top()<<endl;
         pq.display();
         //max heap ka bhi karyo khudse
}