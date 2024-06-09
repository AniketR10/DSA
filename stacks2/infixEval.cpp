#include<iostream>
#include<stack>
using namespace std;
int prio(char ch){
    if(ch=='*' || ch=='/') return 2;
    else return 1;
}
int solve(int a,int b, char ch){
     if(ch=='*') return a*b;
      else if(ch=='/') return a/b;
        else if(ch=='+') return a+b;
           else return a-b;

}
int main(){
    string s= "7+9*4/8-3";//infix expression
    //we need two stacks 
    stack<int> val;
    stack<char> op;
    for(int i=0;i<s.size();i++){
            //check if s[i] is a digit from (0-9)
            int ascii=(int)s[i];
            if(ascii>=48 && ascii<=57){
                val.push(ascii-48);

            }
            else{
                if(op.size()==0 || prio(s[i])>prio(op.top())) op.push(s[i]);
                else{ //prio(s[i])<=prio(op.top())
                while(op.size()>0 && prio(s[i])<=prio(op.top())){
                    //i have to do val1 op val2
                    char ch=op.top();
                    op.pop();
                    int val2=val.top();
                    val.pop();
                    int val1=val.top();
                    val.pop();
                    int ans=solve(val1,val2,ch);
                    val.push(ans);

                }
                op.push(s[i]);


                }
            }

    } 
    //the op stack can have values
    //therefor make it empty
    while(op.size()>0){
        //kaam karo
        char ch=op.top();
                op.pop();
                    int val2=val.top();
                    val.pop();
                    int val1=val.top();
                    val.pop();
                    int ans=solve(val1,val2,ch);
                    val.push(ans);

    }
    cout<<val.top();




}
