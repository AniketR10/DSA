#include<iostream>
using namespace std;
int main(){
    
   int n;
 //  cout<<"enter the n ";
   cin>>n;
   
   int arr[n][n];

//cout<<" enter the elements ";
   for(int i=0; i<=n-1; i++){
    for(int j=0; j<=n-1; j++){
       cin>>arr[i][j];
    }
    
   }
   for(int i=0; i<=n-1; i++){
    for(int j=0; j<=n-1; j++){
       //cout<<arr[i][j]<<" ";

    }
   // cout<<endl;
    
   }
   int rmin=0;
   int rmax=n-1;
   int cmin=0;
   int cmax=n-1;
   int a=1;
   
   while(cmax>=cmin || rmax>=rmin){
   for(int j=0; j<=cmax; j++){
    arr[rmin][j]=a++; 
   }
   rmin++;
   


   if(rmin>rmax || rmin>rmax) break;


   for(int i=rmin; i<=rmax; i++){
    arr[i][cmax]= a++;
   }
   cmax--;
   
   if(cmin>cmax || rmin>rmax) break;

   for(int j=cmax; j>=cmin; j--){
    arr[rmax][j]=a++;
   }
   rmax--;
   
   if(cmin>cmax || rmin>rmax) break;

   for(int i=rmax; i>=rmin; i--){
    arr[i][cmin]=a++;
   }
   cmin++;
   
   if(cmin>cmax || rmin>rmax) break;

   for(int j=cmin; j<=cmax; j++){
    arr[cmax][j]=a++;
   }
   rmax--;
   
   if(cmin>cmax || rmin>rmax) break;

    }
    

    
}




    

