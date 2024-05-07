#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
                        
int main(){
            class Solution {
        public: 
        //good sawal of partition dp 
            vector<vector<string>> res;
            vector<vector<int>> dp;
            bool ispalindrome(string s,int i,int j)
            {   
                if(i==j)return true;
                if(dp[i][j]!=-1)return dp[i][j];
                while(i<j)
                {
                    if(s[i]!=s[j])return dp[i][j]=false;
                    i++,j--;
                }
                return dp[i][j]=true;
            }
            void solve(string s,int i,vector<string> cur)
            {
                if(i==s.size()){
                    res.push_back(cur);
                    return;
                }
                int j=i;
                for(j=i;j<s.size();j++)
                {
                    if(ispalindrome(s,i,j)){    
                        cur.push_back(s.substr(i,j-i+1));
                        solve(s,j+1,cur);
                        cur.pop_back();
                    }
                }
            }
            vector<vector<string>> partition(string s) {
                dp=vector<vector<int>>(s.size()+1,vector<int>(s.size()+1,-1));
                solve(s,0,{});
                return res;
            }
};
    return 0;
}