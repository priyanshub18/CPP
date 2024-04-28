#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
int n;
class Solution {
public:

    //may give tle in the coding nijas as the optimal solution of of 0(nlogn)
    vector<vector<int> > dp;
    int n ;
    int f(int idx , int pi, vector<int>& nums){
        if(idx == n) return 0;
        if(dp[idx][pi+1] != -1) return dp[idx][pi+1];
        int len = f(idx + 1 , pi , nums);
        if(pi == -1 or nums[idx] > nums[pi]) {
            len = max(len , 1 + f(idx +1 , idx , nums));
        }


        return dp[idx][pi+1] = len;
    }
    int lengthOfLIS(vector<int>& nums) {
        n  = nums.size();
        dp.resize(n , vector<int>(n+1 , -1));

        return f(0 , -1 , nums);
    }
};     

//bottom up or tabulation approach for the same 
int lengthOfLIS(vector<int>& nums) {
        n  = nums.size();
        vector<vector<int>> dp;
        dp.resize(n+1 , vector<int>(n+1 , 0));
        for(int idx = n-1 ; idx >= 0 ; idx--){
            for(int prev = idx -1 ; prev >= -1 ; prev--){
                int len = dp[idx+1][prev+1];
                if(prev == -1 or nums[idx] > nums[prev]){
                    len = max(len , 1 + dp[idx+1][idx+1]);
                }

                dp[idx][prev+1] = len;
             }
        }

        return dp[0][0];
    }
//space optimised approach for the same 
int lengthOfLIS(vector<int>& nums) {
        n  = nums.size();
        vector<int>ahead(n+1 , 0) , curr(n+1 , 0);
        for(int idx = n-1 ; idx >= 0 ; idx--){
            for(int prev = idx -1 ; prev >= -1 ; prev--){
                int len = ahead[prev+1];
                if(prev == -1 or nums[idx] > nums[prev]){
                    len = max(len , 1 + ahead[idx+1]);
                }

                curr[prev+1] = len;
             }

             ahead = curr;
        }

        return ahead[0];
    }

//another optimsed approach but this tym with 2 basic loops
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n , 1);
        int maxi = 1;
        for(int i = 0 ; i < n ; i++){
            for(int pr = 0 ; pr < i ; pr ++){
                if(nums[pr] < nums[i] and 1 + dp[pr] > dp[i]){
                    dp[i] = max(dp[i] , 1 + dp[pr]);
                }
            }

            maxi = max(maxi , dp[i]);
        }

        return maxi;
        
    }
};
int main(){
    
    return 0;
}