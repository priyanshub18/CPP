#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution {
public:
    vector<vector<int> > dp;
    int fees;
    int f(int idx , int buy , vector<int>& p){
        if(idx == p.size()) return 0;
        if(dp[idx][buy] != -1) return dp[idx][buy];
        int profit = 0;
        if(buy){
            profit = max(-p[idx] + f(idx+1 , 0 , p) , f(idx+1 , 1 , p));
        }
        else{
            profit = max(p[idx] - fees + f(idx+1 , 1 , p) , f(idx +1 , 0 , p));
        }

        return dp[idx][buy] = profit;
    }
    int maxProfit(vector<int>& prices, int fee) {
        int n = prices.size();
        fees = fee;

        dp.resize(n , vector<int>(3 , -1));

        return f(0 , 1 , prices);
    }
};                
int main(){
    
    return 0;
}