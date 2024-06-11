#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//        int ans = 0;
//        for(int bit = 0 ; bit < 32 ; bit++){
//             int cnt = 0;
//             for(int i = 0 ; i < nums.size(); i++){
//                 if(nums[i] & (1 << bit)) cnt++;
//             }
//             if(cnt % 3 == 1) ans = ans | (1 << bit);//to set the bit 
//        } 

//        return ans;
//     }
// };
class Solution {
public:
    int singleNumber(vector<int>& nums) {

        sort(nums.begin() , nums.end());
        for(int i = 1 ; i < nums.size() ; i+=3){
            if(nums[i] != nums[i-1]){
                return nums[i-1];
            }

        }
        return nums[nums.size( ) -1];
    }
};

//the bucket method 
//is very important bhaiiiiii
class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int ones = 0 , twos = 0;
        for(auto ele : nums){
            ones = (ones ^ ele) & (~twos);
            twos = (twos ^ ele) & (~ones);
        }

        return ones;
    }
};
int main(){
    
    return 0;
}