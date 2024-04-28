#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mi = prices[0];
        int max_prof = INT_MIN;

        for(int i = 1 ; i < prices.size() ; i++){
            max_prof = max(max_prof , prices[i] - mi);
            mi = min(mi , prices[i]);
        }

        return max_prof < 0 ? 0 : max_prof;
    }
};                   
int main(){
    
    return 0;
}