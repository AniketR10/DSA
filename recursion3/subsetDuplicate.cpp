#include<iostream>
#include<vector>
using namespace std;
void subsetDuplicate(string str, vector<string>&v,string ans, bool flag ){
    
    
    if(str==""){
    v.push_back(ans);
    return;
    
    }
    char ch=str[0];
    if(str.size()==1){
      if(flag==true) subsetDuplicate(str.substr(1),v,ans+ch,true);
      subsetDuplicate(str.substr(1),v,ans,true); 
      return;
    }
    char dh=str[1];
    if(ch==dh){
       if(flag==true) subsetDuplicate(str.substr(1),v,ans+ch,true);
      subsetDuplicate(str.substr(1),v,ans,false);
    }
    else{
       if(flag==true) subsetDuplicate(str.substr(1),v,ans+ch,true);
      subsetDuplicate(str.substr(1),v,ans,true);
    }
}
int main(){
    string str="abab";
    vector<string>v;
    
      subsetDuplicate(str,v,"",true );
  for(int i=0; i<v.size(); i++){
    cout<<v[i]<<endl;
  }



}