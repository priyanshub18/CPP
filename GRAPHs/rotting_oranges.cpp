#include<iostream>
#include<vector>
#include<queue> 
using namespace std;
class Solution {
public:
int orangesRotting(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int ones = 0 ;

        queue<pair<int, int > > qu;
        for(int i = 0 ; i < rows; i++){
            for(int j = 0 ; j < cols ; j++){
                if(grid[i][j] == 1) ones++;
                if(grid[i][j] == 2){
                    qu.push({i, j});
                }
            }
        }
        qu.push({-1,-1});
    int min  = 0;
    vector<vector<int> > dir = {{1,0} , {-1, 0} , {0,1} , {0, -1}};
    while(not qu.empty()){
        auto cell = qu.front();
        qu.pop();
        int i = cell.first;
        int j = cell.second;
        if(i == -1 and j == -1){
                min++;
            if(not  qu.empty()){
                qu.push({-1,-1});
            }else {
                break;
            }
        }
        else{
        for(int d = 0 ; d < 4; d++ ){

            int newRow = i + dir[d][0];
            int newCol = j + dir[d][1];
            if(newRow < 0 or newCol < 0 or newRow >= rows or newCol >= cols){
                continue;
            }
            if(grid[newRow][newCol] == 2||  grid[newRow][newCol] == 0) continue;
            grid[newRow][newCol] = 2;
            ones--;

            qu.push({newRow , newCol});
            
        }
}
    }
    return ones == 0 ? min -1 : -1;
    

}};                       
int main(){
    
    return 0;
}