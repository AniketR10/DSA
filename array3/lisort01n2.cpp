//three methods dutch, flag, algorithm
//in leetcode

 // method 1 two pass solutions
    //     int n=nums.size();
    //     int noz=0;
    //     int noo=0;
    //     int notw=0;
    //     for(int i=0; i<=n-1; i++){
    //         if(nums[i]==0) noz++;
    //         if(nums[i]==1) noo++;
    //         if(nums[i]==2) notw++;


    //     }
    //     for(int i=0; i<=n-1; i++){
    //         if(i<noz) nums[i]=0;
    //        else if(i<noz+noo) nums[i]=1;
    //        else nums[i]=2;

    //     }
    //     return;
    // }
    //method 2 dutch in leetcode which is important for interview