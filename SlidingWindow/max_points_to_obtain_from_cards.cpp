#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;

class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int l_sum =  0 , r_sum = 0 , max_sum = 0;

        for(int i = 0 ; i < k ; i++) l_sum += nums[i];
        max_sum = l_sum;
        int r = nums.size()-1;
        for(int i = k-1 ; i >= 0 ; i-- ){
            l_sum -= nums[i];
            r_sum += nums[r--];
            max_sum = max(max_sum , l_sum + r_sum);
        }

        return max_sum;
    }
};
int main(){
    
    return 0;
}