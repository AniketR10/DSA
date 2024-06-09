// #include<iostream>
// using namespace std;
// int main(){
//     int n,j,sum=0;
//     cout<<"enter the number ";
//     cin>>n;
//     while(n>0){
//         j= n%10;
//         if(j%2==0){
//             sum+=j;
//         }
//         n/=10;
        


//     }
//     cout<<sum;
// }
 #include<iostream>
 using namespace std;
 int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    int a=1;

    for(int i=1; i<=n; i++){
        a *=i;
    }
    cout<<a<<endl;
 }
