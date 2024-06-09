//find the element x in the array take array and x as input
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array ";
    cin>>n;
    int arr[n];
    cout<<"enter the values of the array ";
    for(int i=0; i<=n-1;i++){
        cin>>arr[i];
    }
    int e;
    cout<<"enter the element which you want to check ";
    cin>>e;
    //checkmark
    bool flag= true;
    for(int i=0; i<=n-1; i++){
    
        if(arr[i]==e) flag =true;
        
    
        
    }
    if (flag=true) cout<<"element found";
    else cout<<"element not found";

}