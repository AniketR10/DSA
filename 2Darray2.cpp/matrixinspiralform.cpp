#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter the row ";
    cin>>m;
    int n;
    cout<<"enter the column ";
    cin>>n;
    int arr[m][n];
    cout<<"enter the vlaues ";
    for(int i=0; i<=m-1; i++){
        for(int j=0; j<=n-1; j++){
            cin>>arr[i][j];
        }
    }
     for(int i=0; i<=m-1; i++){
        for(int j=0; j<=n-1; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
     }
     int minr=0;
     int minc=0;
     int maxr=m-1;
     int maxc=n-1;
     int tne=m*n;
     int count=0;
     while(maxr>=minr && maxc>=minc){
        
        //right
     for(int j=minc; j<=maxc; j++){
        cout<<arr[minr][j]<<" ";
       
     }
      minr++;
      if(minc>maxc || minr>maxr) break;

     //down
     for(int i=minr; i<=maxr; i++){
        cout<<arr[i][maxc]<<" ";
        

     }
     maxc--;
     if(minc>maxc || minr>maxr) break;
     //left
     for(int j=maxc; j>=minc; j--){
        cout<<arr[maxr][j]<<" ";
        

     }
     maxr--;
     if(minc>maxc || minr>maxr) break;
     //up
     for(int i=maxr; i>=minr; i--){
        cout<<arr[i][minc]<<" ";

     }
     minc++;
     if(minc>maxc || minr>maxr) break;
     }
     }
     //leetcode 54

     



