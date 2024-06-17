#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin() ,nums.end());
        
        vector<vector<int>> res;
        
        for(int i = 0;i<n-2;i++){
            if(i == 0 or (i>0 and nums[i] != nums[i-1])){
                int l = i+1 , h =n - 1 , sum = -nums[i];
                
                while(h > l){
                    int add = nums[l] + nums[h];
                    
                    if(sum == add){
                        res.push_back({nums[i] , nums[l] , nums[h]});
                        
                        while(h > l and (nums[l+1] == nums[l])) l++;
                        while(h > l and (nums[h-1] == nums[h])) h--;
                    
                        l++;
                        h--;
                    }
                    else if(sum  > add) l++;
                    else h--;
                }
            }
        }
        return res;
    }
};                   
int main(){
    
    return 0;
}