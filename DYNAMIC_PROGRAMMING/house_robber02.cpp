#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution {
public:
    int ans(vector<int>& v){
        int n = v.size();
        int prev = v[0];
        int prev2 = 0;
        for(int i = 1 ; i < n ; i++){
            int take = v[i];
            if(i > 1) take+= prev2;

            int nottake = prev;

            int curi = max(take , nottake );
            prev2 = prev;
            prev = curi;
        }

        return prev;
    }
    int rob(vector<int>& nums) {
        if(nums.size() == 1) return nums[0]; 
        vector<int> temp1 , temp2;
        for(int i = 0 ; i < nums.size() ; i++){
            if(i != 0) temp1.push_back(nums[i]);
            if(i != nums.size() -1) temp2.push_back(nums[i]);
        }

        int a =  ans(temp1 );
        
        int b = ans(temp2);

        return max(a , b);
    }

};                      
int main(){
    
    return 0;
}