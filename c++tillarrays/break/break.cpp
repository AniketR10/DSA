// kisi loop se bahar nikalna hai if a particular condn satisfies
//wap to check if a number is prime no. or not 
 #include<iostream>
 using  namespace std;
 int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    bool flag= true;
    for(int i=2; i<=n-1;i++){
        if(n%i==0){
            flag = false;
            break;
        }
        
        


        
    }
    if(n==1) cout<<"1 is neither prime nor composite";
    else if(flag == false) cout<<"the number is composite"; 
    else if (flag==true) cout<<"the no. is prime";

 }

