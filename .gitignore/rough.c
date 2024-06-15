#include<math.h>
#include<stdio.h>
int main(){
    int n;
    printf("enter the no");
    scanf("%d",&n);
    int count=0; 
    int no=n;
    while(no!=0){
        no=no/10;
        count++;
    }
    int ans=0; int rem; no=n;
    while(no!=0){
        rem=no%10;
        ans=ans+pow(rem,count);
        no=no/10;
    }
    if(ans==n){
        printf("the number is armstrong");
    }
    else printf("the no  is not");
    return 0;
    // this is all about the code
}