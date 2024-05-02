#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution {
public:
    //good question on partition array DP
    vector<vector<int> > dp;
    int f(int i , int j , vector<int>& nums){
        if(i > j) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        int maxi = 0;
        for(int idx =i ; idx <= j ; idx++){
            int cost = nums[i-1] * nums[idx] * nums[j+1] + f(i , idx-1 , nums) + f(idx+1 , j , nums);
            maxi = max(maxi , cost);
        }

        return dp[i][j] = maxi;
    } 
    int maxCoins(vector<int>& nums) {
        int n = nums.size()  ;
        nums.push_back(1);
        nums.insert(nums.begin() , 1);
        dp.resize(n+2 , vector<int>(n+2 , -1));

        return f(1 , n , nums);
    }
};                  
int main(){
    
    return 0;
}