#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    //method 1 bekaar
    string s="physicswallah";
     int n=s.length();
   
     int max=0;
    


    for(int i=0; i<=n-1;i++){
     
      int count=1;
     for(int j=i+1; j<=n-1; j++){
        if(s[j]==s[i]) count++;

     }
     if(max<count) max=count;
     int mx=max;
     if(count==mx) {
         cout<<s[i]<<" "<<max<<endl;

     
     }
    }
    
//     for(int i=0; i<=n-1;i++){
     
//      int count=1;
//      for(int j=i+1; j<=n-1; j++){
//        if(s[j]==s[i]) count++;
//      }
      
    
       
//  }

//  method2 by using special array
//  string s="leetcode";
//  vector<int>arr(26,0);
//  int m=arr.size();
//  int n=s.length();
//  for(int i=0; i<=n-1; i++){
//       char ch=s[i];
//       int ascii=(int)ch;
//       arr[ascii-97]++;
//  }int max=0;
//  for(int i=0;i<=m-1; i++){
//      if(arr[i]>max) max=arr[i];

//  }
// for(int i=0; i<=m-1; i++){
//     if(arr[i]==max){
//         int ascii=i+97;
//         char ch =(char)ascii;
//         cout<<ch<<" "<<max<<endl;
//     }
// }



}