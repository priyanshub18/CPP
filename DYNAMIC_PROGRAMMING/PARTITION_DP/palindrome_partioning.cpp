#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;

class Solution {
public:
    bool palindrome(string &s)
    {
        int i=0,j=s.length()-1;
        while(i<=j) {
            if(s[i]!=s[j])return false;
                i++;
                j--;
        }
        return true;
    }
    
    int sol(string &s,int idx,vector<int>&dp)
    {
        if(idx==s.length())return 0;
        
        if(dp[idx]!=-1)
            return dp[idx];
        
        string a="";
        int mini=INT_MAX;
        for(int i=idx;i<s.length();i++)
        {
            a+=s[i];
            if(palindrome(a))
            {
                mini=min(mini, 1+sol(s,i+1,dp));   
            }
        }
        return dp[idx]=mini;
    }
    int minCut(string s) {
        int n=s.length();
        vector<int>dp(n,-1);
        return sol(s,0,dp)-1; 
    }
};                    
int main(){
    
    return 0;
}