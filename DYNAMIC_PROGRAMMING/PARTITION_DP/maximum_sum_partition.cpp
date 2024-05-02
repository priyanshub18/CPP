#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
// class Solution {
// public:
    // int n;
    // int d;
    // vector<int> dp;
    // int f(int idx , vector<int> v){
    //     if(idx == n) return 0;
    //     if(dp[idx] != -1) return dp[idx];
    //     int maxi = INT_MIN;
    //     int ans = INT_MIN;
    //     int len =0;
    //     for(int j = idx ; j < min(n, idx+ d) ; j++){
    //         len++;
    //         maxi = max(maxi , v[j]);
    //         int sum = maxi*(len) + f(j +1 , v);
    //         ans = max(ans , sum);
    //     }
    //     return dp[idx] = ans;
    // }
//     int maxSumAfterPartitioning(vector<int>& arr, int k) {
//         n = arr.size();
//         d = k;
//         dp.resize(n , -1);
//         return f(0 , arr);
//         dp[n] = 0;

//         for(int idx = n-1 ; idx >= 0 ; idx++){
//             int maxi = INT_MIN;
//             int ans = INT_MIN;
//             int len =0;
//             for(int j = idx ; j < min(n, idx+ d) ; j++){
//                 len++;
//                 maxi = max(maxi , arr[j]);
//                 int sum = maxi*(len) + dp[j+1];
//                 ans = max(ans , sum);
//             }
//              dp[idx] = ans;
//         }

//         return dp[0];
//     }
// };

class Solution {
private:
    int solve(int ind, int n, int k, vector<int>& arr, vector<int>& dp){
        if(ind>=n) return 0;
        if(dp[ind]!=-1) return dp[ind];
        
        int maxSum = INT_MIN, maxi = INT_MIN, len=0;
        for(int i=ind;i<min(n, ind+k);i++){
            maxi = max(maxi, arr[i]);
            len++;
            int sum = len*maxi + solve(i+1, n, k, arr, dp);
            maxSum = max(sum, maxSum);
        }
        return dp[ind] = maxSum;
    }
public:
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int> dp(n, -1);
        
        return solve(0, n, k, arr, dp);
    }
};                      
int main(){
    
    return 0;
}