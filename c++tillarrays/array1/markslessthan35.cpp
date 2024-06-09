#include<iostream>
using namespace std;
int main(){
    int i;
    int n;
    cout<<"enter the number of students ";
        cin>>n;

    int marks[n];
    for( i=0; i<=n-1;i++){
        cout<<"enter the marks of student "<<i<<" ";

        cin>>marks[i];

    }
    for(int i=0; i<=n-1;i++)
    {
    if(marks[i]< 35) cout<<i<<" ";
    }
}
