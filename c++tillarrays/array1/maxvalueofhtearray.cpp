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
    int max = arr[0];
    for(int i=1; i<=n-1; i++){
        if(max<arr[i]) max = arr[i];

    }
    cout<<max;
}
// we can also take int max= INT_MIN
//it is the smallest value that can be stored in an integer
// is method ko khud se try kar