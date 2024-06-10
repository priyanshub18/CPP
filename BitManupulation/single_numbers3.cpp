#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution {
public:

    //cool thing to begin with 
    vector<int> singleNumber(vector<int>& nums) {
        long  n1 = 0 , n2= 0;
        long x = 0;
        for(int ele : nums){
            x ^= ele;
        }
        long right = (x & ( x-1)) ^ x;
        for(int ele : nums){
            if(ele & right) n1 ^= ele;
            else n2 ^= ele;
        }

        return {(int)n1 , (int)n2};
    }

};                    
int main(){
    
    return 0;
}