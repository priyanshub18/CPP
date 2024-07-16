#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;

   
    void dfs(int i , int j , vector<vector<int>>& grid ,vector<vector<int>>& vis , vector<pair<int, int > >& v , int baserow, int basecol){
        vis[i][j] = 1;
        v.push_back({i-baserow,j-basecol});
        int dx[4] = {-1,0,1,0};
        int dy[4] = {0,-1,0,1};
        for(int k = 0 ; k < 4 ; k++){
            int x = i + dx[k];
            int y = j + dy[k];
            
            if(x >= 0 and x < grid.size() and y >= 0 and y < grid[0].size() and not vis[x][y] and grid[x][y] == 1){
                dfs(x , y , grid , vis , v, baserow, basecol);
            }
        }
    }
    int countDistinctIslands(vector<vector<int>>& grid) {
       int n = grid.size();
       int m = grid[0].size();
       
       vector<vector<int> > vis(n , vector<int>(m,0));
       set<vector<pair<int, int > > > ans;
       for(int i = 0 ; i < n ; i++){
           for(int j = 0 ; j < m ; j++){
               if(!vis[i][j] and grid[i][j] == 1){
                   vector<pair<int, int > > v;
                   dfs(i , j , grid,vis , v, i , j);
                   ans.insert(v);
               }
           }
       }
       return ans.size();
    }          
int main(){
    
    return 0;
}