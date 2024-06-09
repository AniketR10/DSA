#include<iostream>
using namespace std;
int main(){
    int cp,sp;
    cout<<"enter the cost price of the item"<<endl;
    cin>>cp;
    cout<<"enter the selling price of the item"<<endl;
    cin>>sp;
    int z=sp-cp;
    if(cp>sp){
        
        cout<<"bhai loss hora hai of "<<z;

    }
    else{
        cout<<"bhai profit hora hai of "<<z;

    }


}
