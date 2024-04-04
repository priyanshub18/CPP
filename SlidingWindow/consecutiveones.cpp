#include<iostream>
#include<vector>
                    
using namespace std;
                        
int main(){
    class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int flips = 0 , i = 0 , j = 0 ;
        int maxlen = INT_MIN;
        int len;
        while( j < n){
            if(nums[j] == 1) j++;
            else{
                if(flips < k){
                    flips++;
                    j++;
                }
                else{
                    len = j -i;
                    maxlen = max(len , maxlen);
                    while(nums[i]==1){
                        i++;
                    }
                    i++;
                    j++;
                }
            }

        }
        len = j -i;
        maxlen = max(len , maxlen);



        return maxlen;

    }

};
    return 0;
}