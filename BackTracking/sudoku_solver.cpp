#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution {
public:
    bool isSafe(vector<vector<char>>& board , int r , int c , int num ){
        for(int i = 0 ; i < 9 ; i++)
            if(board[r][i] - '0' == num) return false;
        
        for(int i = 0 ; i < 9 ; i++)
            if(board[i][c] - '0' == num) return false;
        
        int x = (r/3) * 3;
        int y= (c/3) * 3;

        for(int i = x ; i < x+3 ; i++){
             for(int j = y; j < y+3 ; j++){
                    if(board[i][j]-'0' == num) return false;
        }
        }

        return true;
    }
    bool f(vector<vector<char>>& board , int r , int c ){
        if(r == 9) return true;
        if(c == 9) return f(board , r +1, 0);
        if(board[r][c] != '.') return f(board , r , c+1);
        for(int j = 1 ; j <= 9 ; j++){
            if(isSafe(board , r ,c , j)){ 
                board[r][c] = '0'+j;
                bool b = f(board , r , c+1);

                if(b) return true;
                board[r][c] = '.';
    
            }
        }
        return false;
    }
    void solveSudoku(vector<vector<char>>& board) {
       f(board , 0 , 0);
       return ;
    }
};                      
int main(){
    
    return 0;
}