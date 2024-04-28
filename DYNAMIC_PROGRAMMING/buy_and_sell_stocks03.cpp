#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution {
public:
    vector<vector<vector<int> > > dp;
    int f(int idx , int buy , int cap , vector<int>& p){
        if(cap == 0) return 0;
        if(idx == p.size()) return 0;
        if(dp[idx][buy][cap] != -1) return dp[idx][buy][cap];
        int profit = 0;
        if(buy){
            profit = max(-p[idx] + f(idx+1 , 0 ,cap, p) , f(idx+1 , 1 ,cap, p));
        }
        else{
            profit = max(p[idx] + f(idx+1 , 1,cap-1 , p) , f(idx +1 , 0 ,cap,p));
        }

        return dp[idx][buy][cap] = profit;
    }
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        dp.resize(n , vector<vector<int>>(2 , vector<int>(3 , -1)));

        return f(0 , 1 , 2 , prices);
    }
};

//optimised memoisation 
class Solution {
public:
    vector<vector<int> >dp;
    int n ;
    int f(int idx , int trans, vector<int>& p){
        if(idx == n or trans == 4) return 0;
        if(dp[idx][trans] != -1) return dp[idx][trans];
        int profit = 0;
        if(trans % 2 == 0){
            profit = max(-p[idx] + f(idx+1 , trans+1, p) , f(idx+1 , trans ,p));
        }
        else{
            profit = max(p[idx] + f(idx+1 , trans+1, p) , f(idx +1 , trans ,p));
        }

        return dp[idx][trans] = profit;
    }
    int maxProfit(vector<int>& prices) {
        n = prices.size();
        dp.resize(n , vector<int>(5 ,-1));

        return f(0 , 0 , prices);
    }
};
int main(){
    
    return 0;
}