#include<iostream>
#include<string>
using namespace std;
int main(){
    string arr[]={"aniket", "raju","manish","chetan", "randi"};
    int m=5;
    for(int i=0; i<m; i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;
    for(int i=0;i<m-1; i++){
        for(int j=0; j<m-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0; i<m; i++){
        cout<<arr[i]<<endl;
    }
}