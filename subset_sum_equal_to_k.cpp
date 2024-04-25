#include <bits/stdc++.h> 
using namespace std;
bool f(int idx , int target , vector<int> &arr,vector<vector<int> > &dp){
    if(target == 0) return true;
    if(idx == 0 ) return arr[0] == target;

    if(dp[idx][target] != -1) return dp[idx][target];
    bool nottake = f(idx-1 , target, arr,dp);
    bool take = false;
    if(target >= arr[idx]) {
        take = f(idx- 1 , target - arr[idx],arr,dp);
    }
    return dp[idx][target] = nottake || take;
}
bool subsetSumToK(int n, int k, vector<int> &arr) {
    vector<vector<int>> dp(n+1 , vector<int>(k+1 , -1));
    
    return f(n-1 , k ,arr,dp);

}

#include <bits/stdc++.h> 
bool f(int idx , int target , vector<int> &arr,vector<vector<int> > &dp){
    if(target == 0) return true;
    if(idx == 0 ) return arr[0] == target;

    if(dp[idx][target] != -1) return dp[idx][target];
    bool nottake = f(idx-1 , target, arr,dp);
    bool take = false;
    if(target >= arr[idx]) {
        take = f(idx- 1 , target - arr[idx],arr,dp);
    }
    return dp[idx][target] = nottake || take;
}
bool subsetSumToK(int n, int k, vector<int> &arr) {
    vector<vector<bool>> dp(n+1 , vector<bool>(k+1 , false));
    //bottom down approach
    for(int i = 0 ; i < n ; i++){
        dp[i][0] = true;
    }

    dp[0][arr[0]] = true;

    for(int idx = 1 ; idx < n ; idx++){
        for(int t = 1 ; t <= k ; t++){
            bool nottake = dp[idx-1][t];
            bool take = false;
        if(t >= arr[idx]) {
        take = dp[idx-1][t-arr[idx]];
        }
             dp[idx][t] = nottake || take;
        }
    }
    return dp[n-1][k];

}



//spaced optimised code is the best code to do 
#include <bits/stdc++.h> 
bool f(int idx , int target , vector<int> &arr,vector<vector<int> > &dp){
    if(target == 0) return true;
    if(idx == 0 ) return arr[0] == target;

    if(dp[idx][target] != -1) return dp[idx][target];
    bool nottake = f(idx-1 , target, arr,dp);
    bool take = false;
    if(target >= arr[idx]) {
        take = f(idx- 1 , target - arr[idx],arr,dp);
    }
    return dp[idx][target] = nottake || take;
}
bool subsetSumToK(int n, int k, vector<int> &arr) {
    vector<bool> prev(k+1 , 0) , curr(k+1 , 0);
    prev[0] = curr[0] = true;
    prev[arr[0] ] = true;
    for(int idx = 1 ; idx <n ; idx++){
        for(int t = 1 ; t <= k ; t++){
            bool nottake = prev[t];
            bool take = false;
        if(t >= arr[idx]) {
        take = prev[t-arr[idx]];
        }
             curr[t] = nottake || take;
        }
        prev = curr;
    }
    return prev[k];

}