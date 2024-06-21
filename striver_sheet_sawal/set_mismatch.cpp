#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        long long n = nums.size();
        long long  s = 0 , sn = 0 , s2 = 0 , s2n = 0;
        for(int i =  1 ; i <= n ; i++){
            s += nums[i-1];
            s2 += (nums[i-1]* nums[i-1]);

            sn += i;
            s2n += (i * i);
        }

        long long  rep ,mis;
        long long  diff = s - sn;
        long long  diff2 = s2 - s2n;
        long long  sum = diff2 / diff;
        return {static_cast<int>((sum + diff)/2) ,static_cast<int>( (sum - diff)/2)};
    }
};                
int main(){
    
    return 0;
}