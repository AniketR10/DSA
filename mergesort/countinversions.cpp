#include<iostream>
 #include<vector>
 using namespace std;
 int count=0;
 int inversion(vector<int>&v1,vector<int>&v2){
    int c=0;
    int i=0;
    int j=0;
    while(i<v1.size() &&j<v2.size()){
        
        if(v1[i]>v2[j]) {
        c+=(v1.size()-i);
        j++;
        }
        else {
            i++;
        }
    }
    return c;

 }
 void merge(vector<int>&v1,vector<int>&v2,vector<int>&res){
 int i=0, j=0, k=0;
 while(i<v1.size() && j<v2.size()){
 if(v1[i]<=v2[j]) res[k++]=v1[i++];
 else res[k++]=v2[j++];

 }
 if(i==v1.size()) while(j<v2.size()) res[k++]=v2[j++];
 if(j==v2.size())  while(i<v1.size()) res[k++]=v1[i++];

 }
void mergeSort(vector<int>&v){

int n=v.size();
if(n==1) return;
int n1=n/2, n2=n-n/2;

vector<int>a(n1),b(n2);// do vectors ko declare krne ka shortcut tareeka 
for(int i=0; i<n1; i++){
    a[i]=v[i];
}
for(int i=0; i<n2; i++){
    b[i]=v[i+n1];
}
// recursion(magic)
mergeSort(a);
mergeSort(b);
//we will count the inversions
count+=inversion(a,b);
//merge
merge(a,b,v);
a.clear();// for impeoving space complexity
b.clear();
}

int main(){
    int arr[]={5,1,3,0,4,9,6};
    int n= sizeof(arr)/sizeof(arr[0]);
    vector<int>v(arr,arr+n);// arra ki copy, ek shortcut method hai yaad rakhna
    for(int i=0; i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    mergeSort(v);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";

    }
     cout<<endl;
    cout<<count;
}

