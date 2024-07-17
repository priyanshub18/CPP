#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
    
        queue<pair<int, int>> q;
        int n = grid.size();
        int m = grid[0].size();
        if(n == 1 and m == 1 and grid[0][0] == 0) return 0;  
        if(n == 1 and m == 1 and grid[0][0] == 1) return -1;  
        int ones = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                if (grid[i][j] == 2) {
                    q.push({i, j});
                    grid[i][j] = 2;
                }
                if(grid[i][j] == 1) ones++;
            }
        }
        if(ones == 0) return 0;

        int time = 0;

        int dx[4] = {0, 0, -1, 1};
        int dy[4] = {1, -1, 0, 0};
        while (not q.empty()) {
            int s = q.size();
            time++;
            for (int l = 0; l < s; l++) {
                auto top = q.front();
                int i = top.first;
                int j = top.second;
                q.pop();

                for (int k = 0; k < 4; k++) {
                    int x = i + dx[k];
                    int y = j + dy[k];

                    if (x >= 0 and x < n and y >= 0 and y < m and
                        grid[x][y] == 1) {
                        grid[x][y] = 2;
                        ones--;
                        q.push({x, y});
                    }
                }
            }
        }

        return ones? -1 :time-1;
    }
};            
int main(){
    
    return 0;
}