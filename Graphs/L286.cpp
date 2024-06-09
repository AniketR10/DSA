
// 286. Walls and Gates
// You are given a m x n 2D grid initialized with these three possible values.

// -1 - A wall or an obstacle.
// 0 - A gate.
// INF - Infinity means an empty room. We use the value 231 - 1 = 2147483647 to represent INF as you may assume that the distance to a gate is less than 2147483647.
// Fill each empty room with the distance to its nearest gate. If it is impossible to reach a gate, it should be filled with INF.

// Example: 

// Given the 2D grid:
// INF  -1  0  INF
// INF INF INF  -1
// INF  -1 INF  -1
//   0  -1 INF INF
// After running your function, the 2D grid should be:

//   3  -1   0   1
//   2   2   1  -1
//   1  -1   2  -1
//   0  -1   3   4


#include<iostream>
#include<vector>
#include <algorithm>
#include<list>
#include<unordered_set>
#include<queue>
using namespace std;

//here we consider -3 in place of INT_MAX for simplification
// -2 means unfilled
// 0->gate
// -1 ->wall

    int dir[4][2]= {{1,0},{-1,0},{0,1},{0,-1}};

int main(){

    int n,m;
    cin>>n>>m;

    vector<vector<int>> grid(n, vector<int>(m,-2));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>grid[i][j];
        }
    }

    vector<vector<bool>> visited(n,vector<bool>(m,false));
    queue<pair<int,int>> q;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          if(grid[i][j] == 0) q.push({i,j});
        }
    }

    while(!q.empty()){
        auto curr = q.front();
            q.pop();
        int i =curr.first;
        int j =curr.second;

        visited[i][j] =true;

        for(int d =0;d<4;d++){
            int r = i+dir[d][0];
              int c = j+dir[d][1];

              if(r<0 or c<0 or r>=n or c>=m or grid[r][c]== -1 or visited[r][c]) continue;
              grid[r][c] = grid[i][j] +1;
              visited[r][c] =true;
              q.push({r,c});
        }
    }

     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          if(!visited[i][j]) grid[i][j] =-2; // cannot be reached to any gate
        }
    }

    cout<<"\n";

     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
         cout<<grid[i][j]<<" ";
        }
        cout<<"\n";
    }
    
}