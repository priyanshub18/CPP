#include<iostream>
#include<vector>
                    
using namespace std;
                        
int main(){
    
    return 0;
}
class Solution {
public:
    vector<int> dp;
    int ans(vector<int>& v , int i){
        int n = v.size();
        if(i == n-1) return v[i];
        if(i == n-2) return max(v[i] , v[i+1]);
        if(dp[i] != -1) return dp[i];
        return dp[i] = max(v[i] + ans(v,i+2) , ans(v, i+1));
    }
    int bottomUp(vector<int>& v){
        int n = v.size() ;
        if(v.size() == 1) return v[0];
        dp[n -1] = v[n-1];
        dp[n-2] = max(v[n-1] , v[n-2]);
        for(int i = n-3 ; i >= 0 ; i--){
            dp[i] = max(v[i] + dp[i+2] , dp[i+1]);

        }
        return  dp[0];

    }
    int rob(vector<int>& nums) {
        dp.resize(10005 , -1);
        return bottomUp(nums);
    }
};