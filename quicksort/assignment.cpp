#include<iostream> //galat hai
#include<vector>
using namespace std;
int sort(vector<int>&v, int si, int ei){

    int pe=v[(si+ei)/2];
    int count=0;
    for(int i=si; i<=ei; i++){
        if(i==(si+ei)/2) continue;
        if(v[i]<pe) count++;
    }
    int pivotIdx=count+si;
    swap(v[(si+ei)/2],v[pivotIdx]);
    int i=si;
    int j=ei;
    while(i<pivotIdx && j>pivotIdx){
        if(v[i]<=pe) i++;
        if(v[j]>pe) j--;
        else if(v[i]>pe && v[j]<pe){
            swap(v[i],v[j]);
            i++;
            j--;
        }
        return pivotIdx;
    }
}
void sortQuick(vector<int>&v,int si,int ei){
    if(ei>=si) return;
    
   int pe= sort(v,si,ei);
    sortQuick(v,si,pe-1);
    sortQuick(v,pe+1,ei);




}
int main(){
    int arr[]={5,8,1,3,7,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>v(arr,arr+n);
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
        sortQuick(v,0,n-1);
        for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
}
