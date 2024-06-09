 #include<iostream>
 using namespace std;
//   void rec(int sum,int n){//using xtra parameter
    
//     if(n==0){
//         cout<<sum<<endl;
// return;
    
//     } 
     
//      rec(sum+n,n-1);

     
    
  int rec(int n){
    if(n==0){
        return 0;
    }
   return n+rec(n-1);
}


int main(){
    int n;
    cout<<"enter the number ";
    cin>>n;
    rec(n);
    cout<<rec(n);
    

 }
