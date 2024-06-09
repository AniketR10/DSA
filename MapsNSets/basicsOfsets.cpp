#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
     s.insert(3);
      s.insert(4);
       s.insert(5);
       s.insert(6);
         s.insert(4);
          s.insert(5);
       cout<<s.size()<<endl;
        for(int ele : s){
            cout<<ele<<" ";
        }
          cout<<endl;
                s.erase(3);
        cout<<s.size()<<endl;
          for(int ele : s){
            cout<<ele<<" ";
        }
        cout<<endl;
        int target=4;
        if(s.find(target)!=s.end()){
            cout<<"exists"<<" ";
        }
        else cout<<"not exists"<<endl;

        

}