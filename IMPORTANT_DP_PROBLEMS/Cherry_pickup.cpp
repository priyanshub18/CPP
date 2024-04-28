#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution {
public:
    vector<vector<vector<int > > > dp;
    int r;
    int c;
    int f(int i , int j1 , int j2 , vector<vector<int>>& g){
        if(j1< 0 or j2 < 0 or j1 >= c or j2 >= c){
            return -1e8;
        }
        if(i == r -1){
            if(j1 == j2) return g[i][j1];
            else return g[i][j1] + g[i][j2];
        }

        if(dp[i][j1][j2] != -1) return dp[i][j1][j2];
        //explore all the paths of the robots 
        int maxi = INT_MIN;
        for(int a = -1 ; a <= 1 ; a++){
            for(int b = -1 ; b <= 1 ; b++){
                int val = 0;
                if(j1 == j2) val = g[i][j1];
                else val = g[i][j1] + g[i][j2];

                val += f(i+1 , j1+a ,j2+b , g);
                maxi = max(maxi , val);
            }
    }
    return dp[i][j1][j2] = maxi;
    }
    int cherryPickup(vector<vector<int>>& grid) {
        r = grid.size();
        c = grid[0].size();

        dp.resize(r , vector<vector<int>>(c , vector<int>(c , -1)));
        return f(0 , 0 , c-1 , grid);

    }
};                        
int main(){
    
    return 0;
}