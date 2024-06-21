#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int lo = 0 , hi = n-1;

        while(lo <= hi){
            //find mid
            int mid = lo + (hi - lo)/2;

            //check if mid is the target 
            if(nums[mid] == target){
                return mid;
            }

            //check for sorted halves
            //check for left one
            if(nums[lo] <= nums[mid]){
                if(nums[lo] <= target and target <= nums[mid]){
                    hi = mid - 1;
                }
                else{
                    lo = mid + 1;
                }
            }
            //right one
            else{
                if(nums[hi] >= target and target >= nums[mid]){
                    lo = mid +1;
                }
                else{
                    hi = mid - 1;
                }
            }
        }
        return -1;
    }
};                      
int main(){
    
    return 0;
}


