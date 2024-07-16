#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
#define pp pair<int , pair<int , int> > 
class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        int n = heights.size();
        int m = heights[0].size();
        vector<vector<int>> dist(n , vector<int> (m , 1e9));
        dist[0][0] = 0;

        priority_queue<pp , vector<pp> , greater<pp>> pq;

        pq.push({0 , {0,0}});
        int dx[] = {0,0,1,-1};
        int dy[] = {1,-1,0,0};

        while(not pq.empty()){
            auto top = pq.top();
            int diff = top.first;
            int i = top.second.first;
            int j = top.second.second;
            pq.pop();

            if(i == n-1 and j == m-1) return diff;

            for(int k = 0 ;  k  < 4 ; k++){
                int x = i + dx[k];
                int y = j + dy[k];


                if(x >= 0 and x < n and y >= 0 and y < m){
                    int neweffort = max(abs(heights[x][y] - heights[i][j]) , diff);
                    if(neweffort < dist[x][y]){
                        dist[x][y] = neweffort;

                        pq.push({neweffort , {x,y}});
                    }
                }
            }
        }
        return -1;
    }
};            
int main(){
    
    return 0;
}