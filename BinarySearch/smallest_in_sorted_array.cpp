#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int lo = 0 , hi = n-1;
        int ans = INT_MAX;
        while(lo <= hi){
            int mid = lo + (hi - lo)/2;

            if(nums[lo] <= nums[mid]){
                ans = min(ans , nums[lo]);
                lo = mid + 1;

            }
            else{
                ans = min(ans, nums[mid]);
                hi = mid - 1;
            }
        }
        
        return ans;
    
    }
};            
int main(){
    
    return 0;
}