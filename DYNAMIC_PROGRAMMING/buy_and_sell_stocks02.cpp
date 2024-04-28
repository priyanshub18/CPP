#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution {
public:
    vector<vector<int> > dp;
    int f(int idx , int buy , vector<int>& p){
        if(idx == p.size()) return 0;
        if(dp[idx][buy] != -1) return dp[idx][buy];
        int profit = 0;
        if(buy){
            profit = max(-p[idx] + f(idx+1 , 0 , p) , f(idx+1 , 1 , p));
        }
        else{
            profit = max(p[idx] + f(idx+1 , 1 , p) , f(idx +1 , 0 , p));
        }

        return dp[idx][buy] = profit;
    }
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<int> p = prices;
        dp.resize(n+1 , vector<int>(2 , -1));

        //bottom up solution now 
        dp[n][0] = dp[n][1] = 0;
        for(int idx = n-1 ; idx >= 0 ; idx--){
            for(int buy = 0 ; buy <= 1 ; buy++){
                int profit = 0;
            if(buy){
                profit = max(-p[idx] + dp[idx+1][0] ,  dp[idx+1][1]);
            }
            else{
                profit = max(p[idx] + dp[idx+1][1] , dp[idx+1][0]);
            }

             dp[idx][buy] = profit;
            }
        }
        return dp[0][1];
    




    //space optimised version 
    vector<int> ahead(2, 0) , curr(2,0);
        ahead[0] = ahead[1] = 0;
        for(int idx = n-1 ; idx >= 0 ; idx--){
            for(int buy = 0 ; buy <= 1 ; buy++){
                int profit = 0;
            if(buy){
                profit = max(-p[idx] + ahead[0] ,  ahead[1]);
            }
            else{
                profit = max(p[idx] + ahead[1] , ahead[0]);
            }

            curr[buy] = profit;
            }
            ahead = curr;

        }
        return ahead[1];
    }

};                     
int main(){
    
    return 0;
}