#include<bits/stdc++.h>

using namespace std;
    int dx[]={1,1,-1,-1,2,2,-2,-2};
    int dy[]={2,-2,2,-2,1,-1,1,-1};

    bool canMove(vector<vector<int>>&grid, int i, int j, int n){
        return i>=0 and j>=0 and i<n and j<n and grid[i][j] ==-1;
    }

    void display(vector<vector<int>>&grid, int n){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    cout<<grid[i][j]<<" ";
                }
                cout<<"\n";
            }
    }

    void f(vector<vector<int>>&grid, int i, int j, int count, int n){
        if(count ==n*n -1){
            grid[i][j] = count;
            display(grid, n);
            cout<<"*****"<<"\n";
            grid[i][j] = -1;
                return;
        }
        

           for(int m=0;m<8;m++){
            if(canMove(grid,i+dx[m],j+dy[m],n)){
                grid[i][j] =count;
                f(grid,i+dx[m], j+dy[m],count+1,n);
                grid[i][j] =-1;
            }

           }
    }

 int main(){
    int n;
    cin>>n;

    vector<vector<int>> grid(n,vector<int>(n,-1));

    f(grid,1,1,0,n);



 }