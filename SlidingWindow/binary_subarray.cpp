#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution {
public:
    int f(vector<int>& nums, int goal){
        if(goal < 0 ) return 0;
        int l = 0 , r = 0 , sum = 0 , ans = 0;
        while(r < nums.size()){
            sum += nums[r];

            while(sum > goal){
                sum -= nums[l];
                l++;
            }

            ans += (r-l+1);
            r++;
        }
        return ans;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return f(nums , goal) - f(nums , goal-1);
    }
};                      
int main(){
    
    return 0;
}