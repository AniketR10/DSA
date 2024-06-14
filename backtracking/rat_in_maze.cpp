#include<bits/stdc++.h>

using namespace std;
    vector<vector<int>> maze;
    int dir[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};
   // vector<vector<bool>> visited;
     int ans=0;
    bool move(int r,int c, int n){
        if(r>=0 and c>=0 and r<n and c<n and !maze[r][c]){
            return true;
        }
        return false;
    }
       
    void f(int i, int j, int n){
      // visited[i][j] = true;
      maze[i][j] =2; // marked visited
       if(i == n-1 and j== n-1){
        ans++;
        return;
       }
     for(int d=0;d<4;d++){
        int r = i+dir[d][0];
        int c = j+dir[d][1];
        if(move(r,c,n)){
            f(r,c,n);
           maze[r][c] =0;// marked unvisited
        }
     }
    }

int main(){
    int n;
    cin>>n;
    maze.resize(n,vector<int>(n));
    //visited.resize(n,vector<bool>(n,false));

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>maze[i][j];
        }
    }
    f(0,0,n);
    cout<<ans;

}