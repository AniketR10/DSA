// very good and interesting ques
#include<iostream>
#include<queue>
using namespace std;
int main(){
    int arr[]={2,7,4,1,8};
    priority_queue<int, vector<int>, greater<int>> pq;
    for(auto ele : arr) pq.push(ele);
    int minCost=0;
    while(pq.size()>1){
        int x=pq.top();
        pq.pop();
        int y=pq.top();
        pq.pop();
        pq.push(x+y);
         minCost+= (x+y);
    }
 cout<<minCost;
        
}