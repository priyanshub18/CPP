#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution {
public:
    vector<vector<int> > dp;
    int f(int i , int t, vector<int>& coins){
        if(t == 0) return 0;
        if(i == 0){
            if(t % coins[i] == 0) return t / coins[i];
            if(coins[0] == t) return 1;
            return 1e9;
        }
        if(dp[i][t] != -1 ) return dp[i][t];
        int take = INT_MAX;
        if(t >= coins[i]){
            take =1 + f(i , t - coins[i] , coins); 
        }
        int notTake = f(i -1 , t , coins);

        
        return dp[i][t] = min(take, notTake);


    }
    int coinChange(vector<int>& coins, int amount) {
        sort(coins.begin() , coins.end());
        int n = coins.size();
        dp.resize(n , vector<int>(amount+ 1 , -1 ));
        int ans = f(n-1 , amount , coins);
        return (ans >= 1e9) ? -1 : ans;
    }
};                   
int main(){
    
    return 0;
}