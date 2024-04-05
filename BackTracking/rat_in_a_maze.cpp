#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
int ans ;


bool canWeGo(int n , int i , int j ,vector<vector<int> >&grid  ){
    return i>= 0 and j>= 0 and i < n and j < n and grid[i][j] == 0;
}
void f(vector<vector<int> >&grid , int n ,int i , int j ){
    if(i == n -1 and j == n- 1) {
        ans++;
        return;
    }
    grid[i][j] = 2  ;//means visited
    
    if(canWeGo(n , i , j-1 , grid)){
        f(grid , n , i , j-1);
    }
    if(canWeGo(n , i-1 , j , grid)){
        f(grid , n , i-1 , j);
        
    }
    if(canWeGo(n , i , j+1 , grid)){
        f(grid , n , i , j+1);
        
    }
    if(canWeGo(n , i+1 , j , grid)){
        f(grid , n , i+1 , j);
        
    }

    grid[i][j] = 0;
}
int rat_in_a_maze(vector<vector<int> >&grid , int n ){
    ans = 0;
    f(grid , n , 0 , 0);
    return ans;
}                     
int main(){
    vector<vector<int> > grid = {
        {0,0,1,0,0,1,0},
        {1,0,1,1,0,0,0},
        {0,0,0,0,1,0,1},
        {1,0,1,0,0,0,0},
        {1,0,1,1,0,1,0},
        {1,0,0,0,0,1,0},
        {1,1,1,1,0,0,0}
    };
    cout<<rat_in_a_maze(grid,grid.size());
    return 0;
}