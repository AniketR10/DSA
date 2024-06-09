#include<iostream>
#include<vector>
using namespace std;
int  longestsubstr(string a,string b, int la,int lb){
   if(la==a.size() || lb==b.size()) return 0;
     if(a[la]==b[lb]){
        return 1+ longestsubstr(a,b, la+1,lb+1);
     }
     return max(longestsubstr(a,b, la+1,lb),longestsubstr(a,b, la,lb+1));
}
int main(){
    string a;
    string b;
    cout<<"enter the two strings :";
    cin>>a>>b;
   cout<<longestsubstr(a,b,0,0);

}