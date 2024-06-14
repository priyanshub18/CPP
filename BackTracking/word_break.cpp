#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution {
public:
    vector<vector<int> > dp;
    bool solve(int start , int end , string s, unordered_set<string>& st){
        if(dp[start][end] != -1) return dp[start][end];
        if(end  == s.length()-1){
            if(st.find(s.substr(start , end - start +1)) != st.end()) return true;
            else return false;
        }

        if(st.find(s.substr(start , end - start +1)) != st.end()) {
            if(solve(end+1  , end +1  ,s , st)){
                dp[start][end] = 1;
             return true;

        }

        }
        return dp[start][end] = solve(start , end+1 , s ,st);

    }
    bool wordBreak(string s, vector<string>& wordDict) {
        dp.resize(305 , vector<int> (305 , -1));
        unordered_set<string> st(wordDict.begin() , wordDict.end());
        return solve(0 , 0 , s , st);
    }
};                   
int main(){
    
    return 0;
}