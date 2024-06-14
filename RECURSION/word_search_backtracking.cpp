#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution {
public:
    bool helper(vector<vector<char>>& board , string word , int i , int j ,int n , int m, int k){
        if(k >= word.length()) return true;
        if(i < 0 or i >= n or j < 0 or j >= m or board[i][j] = '.' or word[k] != board[i][j]) return false;
        if(word.size() == 1 and word[k] == board[i][j]) return true;

        board[i][j] = '.';
        bool temp = false;

        int x[4] = {0,0,-1,1};
        int y[4] = {-1,1,0,0};

        for(int idx = 0 ; idx < 4 ;idx++){
            temp = temp or helper(board , word , i + x[idx] , j + y[idx] , n , m , k+1);
        }
        board[i][j] = word[k];
        return temp;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        if(n == 0) return false;
        int m = board[0].size();
        if(word.size() == 0) return false;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(word[0] = board[i][j]){
                    if(helper(board , word , i , j , n ,m , 0)) return true;
                }
            }
        }
        return false;
    }
};                    
int main(){
    
    return 0;
}