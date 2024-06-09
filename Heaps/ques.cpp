// Given two arrays a[] and b[] of the same size. Task is to find the minimum sum of two
// elements such that they belong to different arrays and are not at the same index in their
// arrays

// Example :
// We take 1 from a[] and 2 from b[]
// Sum is 1 + 2 = 3.

// We take 1 from a[] and 2 from b[].Note that we can't take 1 from b[] as the elements can not
// be at same
// index.
// Input : a[] = {5, 4, 13, 2, 1}
// b[] = {2, 3, 4, 6, 5}
// Output : 3

// Input : a[] = {5, 4, 13, 1}
// b[] = {3, 2, 6, 1}
// Output : 3


#include<iostream>
#include<queue>
#include<vector>
using namespace std;
typedef pair<int,int> p;
  int minSum(vector<int> arr1,vector<int> arr2){
    priority_queue<p, vector<p>, greater<p>> pq1;
     priority_queue<p, vector<p>, greater<p>> pq2;
     for(int i=0;i<arr1.size();i++){
      pq1.push({arr1[i],i});
   
     }
     for(int i=0;i<arr2.size();i++){
      pq2.push({arr2[i],i});
   
     }

      if(pq2.top().second==pq1.top().second){
        auto m1=pq1.top();
        pq1.pop();
         auto m2=pq2.top();
        pq2.pop();
        if(pq1.top().first>pq2.top().first){
            pq1.push(m1);
        } 
        else pq2.push(m2);

      }
      return pq1.top().first+pq2.top().first;
     }
    
  
int main(){
  int a1[] = {5, 4, 13, 1};
   int a2[] = {3, 2, 6, 1};
  vector<int> arr1(begin(a1), end(a1));
  vector<int> arr2(begin(a2), end(a2));
  cout<<minSum(arr1,arr2);  
}
