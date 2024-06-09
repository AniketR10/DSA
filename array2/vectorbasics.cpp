#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v; //you need not mention the size
    //for inserting and input do not use [] instead use pushback

    v.push_back(6);
    cout<<v.size()<<endl;
    v.push_back(1);
    cout<<v.size()<<endl;
    v.push_back(9);
    cout<<v.size()<<endl;
    v.push_back(0);
    cout<<v.size()<<endl;
    //if u want to update / access then u can use []
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
//size ki jagah capacity krke dekh usme ans alag atta u know how

}
//here initiallly v array has size zero
//but when we use pushback it increases the size by one value
// and the simultaneously doubles the size