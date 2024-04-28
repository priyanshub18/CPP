#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution {
public:
    vector<vector<int> >dp;
    int n ;
    int no_of_trans;
    int f(int idx , int trans, vector<int>& p){
        if(idx == n or trans == no_of_trans) return 0;
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
    int maxProfit(int k, vector<int>& prices) {

        n = prices.size();

        dp.resize(n , vector<int>(2 * k +1 , -1));
        no_of_trans = 2 * k ;

        return f(0 , 0, prices);

    }
};                 
int main(){
    
    return 0;
}