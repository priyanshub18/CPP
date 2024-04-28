#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution {

    //one of the most intuitive solution on longest increasing subset 
public:
    int findNumberOfLIS(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN;
        vector<int> dp(n , 1), count(n, 1);
        for(int i = 0 ; i < n ; i++){
            for(int pr = 0 ; pr < i ; pr ++){
                if(nums[pr] < nums[i] and 1 + dp[pr] > dp[i]){
                    dp[i] = max(dp[i] , 1 + dp[pr]);
                    //inherit 
                    count[i] = count[pr];
                }
                else if(nums[pr] < nums[i] and 1 + dp[pr] == dp[i]){
                    //increase the count
                    count[i] += count[pr];
                }
            }

            maxi = max(maxi , dp[i]);
        }
        int cnt = 0;
        for(int i = 0 ; i < n ; i++){
            if(dp[i] == maxi) cnt += count[i];
        }

        return cnt;
    }
};                      
int main(){
    
    return 0;
}