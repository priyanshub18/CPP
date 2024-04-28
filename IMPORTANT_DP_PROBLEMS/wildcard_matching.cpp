#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution {
public:
    bool isMatch(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();
        vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
        vector<bool> prev(n+1, 0), curr(n+1, 0);
        prev[0] = true;
        for(int i=1; i<=n; i++) {
            prev[i] = false;
        }
        
        for(int i=1; i<=m; i++) {
            int flag = true;
            for(int ii=1; ii<=i; ii++) {
                if(s2[ii-1] != '*') flag = false;
            }
            curr[0] = flag;
            for(int j=1; j<=n; j++) {
                if(s1[j-1] == s2[i-1] || s2[i-1] == '?') curr[j] = prev[j-1];
                else if(s2[i-1] == '*') curr[j] = prev[j] | curr[j-1];
                else curr[j] = false;
            }
            prev = curr;
        }
        return prev[n];
    }
};   
class Solution {
public:
    int solve(int i,int j,string &s,string &t,vector<vector<int>>&dp){
        if(i<0&&j<0) return 1;
        if(j<0)return 0;
        if(i<0){
            for(int ind=0;ind<=j;ind++){
                if(t[ind]!='*') return 0;
            }
            return 1;

        } 
        if(dp[i][j]!=-1) return dp[i][j];
        if(s[i]==t[j]||t[j]=='?')
        return dp[i][j]=solve(i-1,j-1,s,t,dp);
        else if(t[j]=='*')
        return dp[i][j]=solve(i-1,j,s,t,dp)|solve(i,j-1,s,t,dp);
        else 
        return dp[i][j]=0;
    }
        bool isMatch(string s, string t) {
            int n=s.size();
            int m=t.size();
            vector<vector<int>>dp(n,vector<int>(m,-1));
            return solve(n-1,m-1,s,t,dp);
            
            
        }
    };                    
int main(){
    
    return 0;
}