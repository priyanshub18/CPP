#include<iostream>
#include<vector>
                    
using namespace std;
    bool sub(int r , int c,vector<vector<char>>& board, string word ){
        int idx = 1;
        int m = board.size();
        int n = board[0].size();
        while(r >= 0 && c >= 0 && r < m && c < n){
            if(r +1 > 0 and r + 1 < m and board[r+1][c] == word[idx]){
                    r++;
                    idx++;  
                    //if(idx == word.length()) return true; 
                    cout<<"here";

            }
           
            else if(r - 1 > 0 and r - 1 < m and board[r-1][c] == word[idx]){
                    r--;
                    idx++;
                    //if(idx == word.length()) return true; 
                    cout<<"here";
                    
                
            }
            else if(c +1 > 0 and c + 1 < n and board[r][c+1] == word[idx]){
                    c++;
                    idx++;
                    //if(idx == word.length()) return true;
                    cout<<"here"; 
            }
            else if(c-1 > 0 and c- 1 < m and board[r][c-1] == word[idx]){
                    c--;
                    idx++; 
                    //if(idx == word.length()) return true;  
                    cout<<"here";
            }
        }

        if(idx == word.length()) return true;
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        char ch = word[0];
        int m = board.size();
        int n = board[0].size();
        vector<pair<int , int > > start;
        for(int i = 0 ; i < m; i++){
            for(int j = 0 ; j < n; j++){
                if(board[i][j] == ch) {
                    start.push_back({i , j});
                
                }
            }
        }
        vector<bool> b;
        for(int i = 0 ; i < start.size() ; i++){
            b.push_back(sub(start[0].first,start[0].second , board , word));
        }

        for(auto el : b){
            if(el == true) return true;
        }

        return false;
        
    }                       
int main(){
    
    vector<vector<char>> board;
    
    string word = "ABCCED";
    cout<<exist(board,word);
    return 0;
}