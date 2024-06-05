#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution {
public:
    int helper(vector<int>& nums , int k){
        int l = 0 , r = 0 , ans = 0;
        unordered_map<int,int> mp;
        while(r < nums.size()){
            mp[nums[r]]++;
            while(mp.size() > k){
                mp[nums[l]]--;
                if(mp[nums[l]] == 0) mp.erase(nums[l]);
                l++;
            }

            ans += (r-l+1);
            r++;
        }
        return ans;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return helper(nums , k ) - helper(nums , k-1);
    }
};                 
int main(){
    
    return 0;
}