#include<iostream>
#include<vector>
using namespace std;
vector <int> merge(vector<int>&v , vector<int>&v2){
    int i=0;
    int j=0;
    int k=0;
    int n=v.size();
    int m=v2.size();
    vector<int>res(m+n);
    while(i<=n-1 && j<=m-1){
        if(v[i]<v2[j]) {
            res[k]=v[i];
            i++;}
         
             else {
                res[k]= v2[j];
                j++;
             }
             k++;
    }
         if(i==n){
            while(j<=n-1){
            res[k]=v2[j];
            j++;
            }

            
         }
          if(j==m){
            while(i<=n-1){
            res[k]=v[i];
            i++;
            }
            k++;
            
         }
         
        return res;
    }
      

    
    
    

    

int main(){
     
     vector<int>arr1;
    
     
      arr1.push_back(1);
            arr1.push_back(4);
                  arr1.push_back(5);
                        arr1.push_back(8);
                        for(int i=0; i<=arr1.size()-1; i++){
                            cout<<arr1[i]<<" ";
                        }
                        vector<int> arr2;
                              arr2.push_back(2);
                                    arr2.push_back(3);
                                          arr2.push_back(6);
                                                arr2.push_back(7);
                                                for(int i=0; i<=arr2.size()-1; i++){
                            cout<<arr2[i]<<" ";
                                                }
                                                cout<<endl;

                                                      arr2.push_back(10);
                                                            arr2.push_back(12);
                                                            vector<int>v =merge(arr1,arr2);
                                                            for(int i=0; i<=v.size()-1; i++){
                            cout<<v[i]<<" ";
                                                            }
      
      
     
     
}