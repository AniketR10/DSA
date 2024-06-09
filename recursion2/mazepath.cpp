#include<iostream>
  using namespace std;
  int maze(int sr, int sc,int n, int m){
    if(sc>m ||sr>n) return 0;
    if(sc==m && sr==n) return 1;
    
     int rightways=maze(sr,sc+1,n,m);
     int downways=maze(sr+1,sc,n,m);
     return rightways + downways;

  }
  int maze2(int n, int m){// by using two parameters ab isi ki tara printPath wale ko kar by using two variables
    if(n<1 || m<1) return 0;
    if(n==1 &&m==1) return 1;

    int rw=maze2(n,m-1);
    int dw=maze2(n-1,m);
    return rw+dw;


  }
  void printPath(int sr, int sc,int n, int m,string s){
    if(sc>m ||sr>n) return ;
    if(sc==m && sr==n){ 
        cout<<s<<endl;
    return;
    }
    
     printPath(sr,sc+1,n,m,s+'R');//right
     printPath(sr+1,sc,n,m,s+'D');//down
     
  }
  void pp2(int n,int m, string s){
        if(n<1 || m<1) return;
        if(n==1 &&  m==1){
            cout<<s<<endl;
            return;
        }
        pp2(n-1,m,s+'D');
        pp2(n,m-1,s+'R');

  }
  int main(){
      int n,m;
      cout<<"enter the no. of rows and columns :";
     cin>>n>>m;
     
   // cout<<maze(1,1,n,m)<<endl;
    //cout<<maze2(n,m)<<endl;
   // printPath(1,1,n,m, "");
   pp2(n,m,"");
 }