#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
//another approach can also be seen as the maximum subarray with the number of zeroes equal to k
        int l = 0;
        int r = 0;
        int n = nums.size();
        int z = 0;
        int max_len = 0;
        while(r < n){
            if(nums[r] == 0) z++;


            if(z > k){
                if(nums[l]== 0) z--;
                l++;
            }

            if(z <= k){
                int len = r-l+1;
                max_len = max(max_len , len);
            }

            r++;
        }


        return max_len;
    }
};                  
int main(){
    
    return 0;
}