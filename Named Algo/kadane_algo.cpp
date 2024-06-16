#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxm = INT_MIN;
        int st,start,end;
        for (int i = 0; i < nums.size(); i++) {
            if(sum == 0) start = i;
            sum += nums[i];
            // maxm = max(maxm, sum);
            if(sum > maxm){
                maxm = sum;
                st = start;
                end = i;
            }

            sum = (sum < 0) ? 0 : sum;
        }
        for(int i = st ; i <= end ; i++){
            cout<<nums[i]<<" ";
        }
        return maxm;
    }
};                   
int main(){
    vector<int> v {-2,1,-3,4,-1,2,1,-5,4};
    Solution s =  Solution();
    cout<<s.maxSubArray(v);
    return 0;
}