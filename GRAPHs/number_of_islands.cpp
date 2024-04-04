#include<iostream>
#include<vector>
#include<queue>
                    
using namespace std;
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int row = grid.size();
        int col = grid[0].size();

        int cc = 0; //store the number of connected components
        for(int r =  0 ; r < row ; r++){
            for(int c = 0 ; c < col ; c++){
                if(grid[r][c] == '0' ) continue;
                cc++;
                grid[r][c] = '0'; //mark it as something is visited

                queue<pair<int , int > >  qu;
                qu.push({r,c});
                while(not qu.empty()){
                    auto curr = qu.front();
                    qu.pop();

                    //go to all the unvisited neighbour 
                    int currRow = curr.first;
                    int currCol = curr.second;

                    if(currRow - 1 >= 0  and grid[currRow -1][currCol] == '1'){
                        //trying to go up 
                        qu.push({currRow- 1 , currCol});
                        grid[currRow -1][currCol] = '0';
                    }
                    if(currRow + 1 < row and grid[currRow +1][currCol] == '1'){
                    
                        qu.push({currRow+ 1 , currCol});
                        grid[currRow +1][currCol] = '0';
                    }
                    if(currCol - 1 >= 0  and grid[currRow][currCol-1] == '1'){
                        //trying to go left
                        qu.push({currRow , currCol-1});
                        grid[currRow][currCol-1] = '0';
                    }
                    if(currCol + 1 < col  and grid[currRow][currCol +1] == '1'){
                        //trying to go right
                        qu.push({currRow , currCol+1});
                        grid[currRow][currCol+1] = '0';
                    }



                }
            }
        }
        return cc;
    
        }
};                       
int main(){
    
    return 0;
}