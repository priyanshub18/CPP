#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution {
public:
    vector<vector<int>> vis;
    int n;
    int m;
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        n = mat.size();
        m = mat[0].size();
        vector<vector<int>> ans(n , vector<int>(m , 0));


        vis.resize(n , vector<int>(m,0));

        queue<pair<pair<int , int > , int >  > q;
        
        for(int i = 0;  i < n ; i++){
            for(int j = 0;  j < m ; j++){
                if(mat[i][j] == 0){
                    vis[i][j] = 1;
                    q.push({{i , j } , 0});
                }
            }
        }
        int dx[] = {0,0,1,-1};
        int dy[] = {1 , -1 ,0 ,0};

        while(not q.empty()){
            auto top = q.front();
            q.pop();
            
            int a = top.first.first;
            int b = top.first.second;
            int d = top.second;
            
            ans[a][b] = d;
        


            for(int i = 0 ; i < 4 ; i++){
                int x = a + dx[i];
                int y = b + dy[i];

                if(x >= 0 and x < n and y >= 0 and y < m and not vis[x][y]){
                    vis[x][y] = 1;
                    q.push({{x,y} , d+1});
                }
            }

        }


       
        return ans;

    }
};            
int main(){
    
    return 0;
}