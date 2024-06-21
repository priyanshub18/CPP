#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int lb = lower_bound(nums.begin() , nums.end() , target) - nums.begin();
        int ub = upper_bound(nums.begin() , nums.end() , target) - nums.begin();
        vector<int> v;
        if(lb == nums.size() or nums[lb] != target ){
            v = {-1 , -1};
            return v;
        }
        else{
            v = {lb , ub - 1};
            return v;
        }
        
        
    }
};                 
int main(){
    
    return 0;
}