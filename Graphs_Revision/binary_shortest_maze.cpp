#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
#define pp pair<int , pair<int , int > > 
class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        if(grid[0][0] == 1) return -1;
        int n = grid.size();
        vector<vector<int>> dist(n , vector<int>(n , 1e9));
        dist[0][0] = 1;
        int dx[] = {-1, 1, 0, 0, -1, -1, 1, 1};
        int dy[] = {0, 0, -1, 1, -1, 1, -1, 1};
        priority_queue<pp , vector<pp> , greater<pp> > pq;
        pq.push({1 , {0,0}});

        while(not pq.empty()){
            auto top = pq.top();
            pq.pop();
            int dis = top.first;
            int i = top.second.first;
            int j = top.second.second;


            for(int k = 0 ; k < 8 ; k++){
                int x = i + dx[k];
                int y = j + dy[k];

                if(x >= 0 and x < n and y >= 0 and y < n and grid[x][y] == 0 and dist[x][y] > 1 + dist[i][j] ){
                    dist[x][y] = dist[i][j] + 1;
                    
                    pq.push({dist[x][y] , {x , y}});
                }
            }
        }
        return dist[n-1][n-1] == 1e9 ? -1 : dist[n-1][n-1];
    }
};            
int main(){
    
    return 0;
}