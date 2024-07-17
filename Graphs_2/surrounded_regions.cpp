#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();
        queue<pair<int , int > > q ;
        for(int i = 0 ; i < n ; i++){
            if(board[i][0] == 'O')q.push({i,0});
        }
        for(int i = 0 ; i < n ; i++){
            if(board[i][m-1] == 'O')q.push({i,m-1});
        }
        for(int i = 0 ; i < m ; i++){
            if(board[0][i] == 'O')q.push({0 , i});
        }
        for(int i = 0 ; i < m ; i++){
            if(board[n-1][i] == 'O')q.push({n-1 , i});
        }
        
        int dx[] = {0,0,1,-1};
        int dy[] = {1,-1,0,0};
        while(not q.empty()){
            auto top = q.front();
            int i = top.first;
            int j = top.second;

            q.pop();

            board[i][j] = 'L';

            for(int k = 0 ; k < 4 ; k++){
                int x = i + dx[k];
                int y = j + dy[k];

                if(x>= 0 and x < n and y >= 0 and y < m and board[x][y] == 'O'){
                    q.push({x,y});
                }
                
                           
            }

        }
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(board[i][j] == 'O') board[i][j] = 'X';
            }
        }

        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(board[i][j] == 'L') board[i][j] = 'O';
            }
        }

    }
};            
int main(){
    
    return 0;
}