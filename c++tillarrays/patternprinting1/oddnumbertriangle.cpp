#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no. of rows ";
    cin>>n;
    
    for(int i=1; i<=n; i++){
        
        for(int j=1; j<=2*i-1; j+=2){
            cout<<j;
        }
        cout<<endl;
    }
}//ek alag variable bhi se bhi kr skte hain see lec 17