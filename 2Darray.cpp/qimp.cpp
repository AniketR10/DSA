// u r given a matrix of size(n *n)
//change this matrix into its transpose
//this method only for sq matrices
// same array ke andar krna hai
// very good expl. in lec 35
   #include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the rows ";
    cin>>n;
    int m;
    cout<<"enter the columns ";
    cin>>m;
    int arr[n][m];
    
    cout<<"enter the values ";
    for(int i=0; i<=n-1; i++){
        for(int j=0; j<=m-1; j++){
            cin>>arr[i][j];
        }
    }
     for(int i=0; i<=n-1; i++){
        for(int j=0; j<=m-1; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0; i<=n-1; i++){
        for(int j=i+1; j<=m-1; j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]= temp;
        }
    

    }
    for(int i=0; i<=n-1; i++){
        for(int j=0; j<=m-1; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
}
}