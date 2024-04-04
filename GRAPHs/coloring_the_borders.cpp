#include<iostream>
#include<vector>
//LC 1034 https://leetcode.com/problems/coloring-a-border/


using namespace std;
class Solution {
public:
    vector<pair<int , int >  > result;
    void dfs(vector<vector<int>>& grid, int r, int c, int color, int originalcolor){
        if(r < 0 || c < 0 || r >= grid.size() || c >= grid[0].size() || grid[r][c] != originalcolor) return ;

        grid[r][c] = -color;
        dfs(grid , r+1,c,color,originalcolor);
        dfs(grid , r,c+1,color,originalcolor);
        dfs(grid , r-1,c ,color,originalcolor);
        dfs(grid , r ,c-1,color,originalcolor);

        //below code will executed by coming back after recursion

        if(not (r == 0 || c ==0 || r == grid.size()-1 || c == grid[0].size()- 1|| grid[r+1][c] != -color ||grid[r][c+1] != -color ||grid[r-1][c] != -color ||grid[r][c-1] != -color )){
            result.push_back({r,c});
        }

    }
    vector<vector<int>> colorBorder(vector<vector<int>>& grid, int row, int col, int color) {
        int originalcolor = grid[row][col];
        if(originalcolor == color ) return grid;

        dfs(grid , row , col , color, originalcolor);

        for(auto e : result){
            grid[e.first][e.second] = originalcolor;
        }
        for(int i = 0 ; i  < grid.size() ; i++){
            for(int j = 0 ; j < grid[0].size() ; j++){
                grid[i][j] = abs(grid[i][j]);
            }
        }


        return grid;

    }
};                        
int main(){
    
    return 0;
}