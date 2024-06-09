#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<climits>
#include<cstring>
#include<iomanip>
#define ll long long int
#define ld long double
using namespace std;
    ld dp[105][105][105];

    ld total(int r, int p, int s){ // calculating the total possibilities
        return r*p +r*s +p*s;
    }

    ld fr(int r, int p, int s){ //rock
        if(r == 0 || s ==0) return 0;
        if(p == 0) return 1;
        if(dp[r][p][s]> -0.9) return dp[r][p][s];
        ld tot =total(r,p,s);
         ld ans =0.0;
          // r-p
         ans+=fr(r-1,p,s)*((r*p)/tot);
         // r-s
         ans+=fr(r,p,s-1)*((r*s)/tot);
         // p-s
         ans+=fr(r,p-1,s)*((p*s)/tot);
         return dp[r][p][s] = ans;
    }
    ld fs(int r, int p, int s){ //scissor 
       if(s == 0 || p ==0) return 0;
       if(r == 0) return 1;
        if(dp[r][p][s]> -0.9) return dp[r][p][s];
        ld tot =total(r,p,s);
         ld ans =0.0;
         // r-p
         // r-p
         ans+=fs(r-1,p,s)*((r*p)/tot);
         // r-s
         ans+=fs(r,p,s-1)*((r*s)/tot);
         // p-s
         ans+=fs(r,p-1,s)*((p*s)/tot);
         return dp[r][p][s] = ans;
    }
    ld fp(int r, int p, int s){ //paper
        if(p ==0 || r == 0) return 0;
        if(s == 0) return 1;
         if(dp[r][p][s]> -0.9) return dp[r][p][s];
         ld tot =total(r,p,s);
         ld ans =0.0;
         // r-p
         ans+=fp(r-1,p,s)*((r*p)/tot);
         // r-s
         ans+=fp(r,p,s-1)*((r*s)/tot);
         // p-s
         ans+=fp(r,p-1,s)*((p*s)/tot);
         return dp[r][p][s] = ans;
    }
int main(){ 
     int r,s,p;
    cin>>r>>s>>p;
   memset(dp,-1.0,sizeof(dp));
   ld ans1 =fr(r,p,s);
   memset(dp,-1.0,sizeof(dp));
   ld ans2=fs(r,p,s);
   memset(dp,-1.0,sizeof(dp));
  ld ans3 = fp(r,p,s);

   cout<<fixed<<setprecision(9)<<ans1<<" "<<ans2<<" "<<ans3;

}