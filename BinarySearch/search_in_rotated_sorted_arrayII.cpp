#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
         int l = 0 ;
        int h = n-1 ;
        while(l <= h){
            int mid = l + (h - l )/2;
            int i = mid;
            
            if(nums[i] == target) return true;
            else if(nums[l] == nums[mid]) l++;
            else if(nums[h] == nums[mid]) h--;
            else if(nums[l] <= nums[mid]){
                if(nums[l] <= target && target <= nums[mid]){
                    h = mid -1 ;}
                else {
                    l  = mid +1 ;
                }

            }
            else {
                if(nums[mid] <= target && target <= nums[h]){
                   l = i + 1 ;}
                else {
                    h  = i  -1 ;
                }
            }
        }

    return false;
 
    }
};         
int main(){
    
    return 0;
}