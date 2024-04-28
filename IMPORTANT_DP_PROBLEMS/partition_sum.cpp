#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution {
public:
    bool solve(int ind,int sum,vector<int> &nums,vector<vector<int>> &dp)
    {
        if(sum==0)
            return true;
        if(ind==0)
            return nums[0]==sum;
        if(dp[ind][sum]!=-1)
            return dp[ind][sum];
        bool notTake=solve(ind-1,sum,nums,dp);
        bool take=false;
        if(nums[ind]<=sum)
            take=solve(ind-1,sum-nums[ind],nums,dp);
        return dp[ind][sum]=(take | notTake);
    }
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int totalsum=0;
        for(auto it:nums)
            totalsum+=it;
        if(totalsum%2!=0)
            return false;
        if(n==1)
            return false;
        int sum=totalsum/2;
        vector<vector<int>> dp(n,vector<int> (sum+1,-1));
        return solve(n-1,sum,nums,dp);
    }
};                      
int main(){
    
    return 0;
}