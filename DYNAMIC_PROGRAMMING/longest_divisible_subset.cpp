#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n = nums.size();

        vector<int> dp(n , 1), hash(n);  
        sort(nums.begin() , nums.end());
        int maxi = 1;
        int lastindex = 0;
        for(int i = 0 ; i < n ; i++){
            hash[i] = i;
            for(int pr = 0 ; pr < i ; pr ++){
                if(nums[i] % nums[pr] == 0 and 1 + dp[pr] > dp[i]){
                    dp[i] = max(dp[i] , 1 + dp[pr]);
                    hash[i] = pr;
                }
            }
            if(dp[i] > maxi){
                maxi = dp[i];
                lastindex = i;
            }   
        }
        vector<int> temp;
        temp.push_back(nums[lastindex]);
        while(hash[lastindex] != lastindex){
            lastindex = hash[lastindex];
            temp.push_back(nums[lastindex]);

        }
        reverse(temp.begin() , temp.end());

        return temp;
            
            
        }
};                      
int main(){
    
    return 0;
}