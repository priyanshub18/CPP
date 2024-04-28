#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution {
public:
    vector<vector<int> > dp;
    int f(int i , int j , vector<int>& cuts){
        if(i > j) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        int mini = INT_MAX;
        for(int idx = i ; idx <= j ; idx++){
            int cost = cuts[j+1] - cuts[i-1] + f(i , idx-1 , cuts) + f(idx+1 , j , cuts);
            mini = min(mini , cost);
        }
        return dp[i][j] = mini;

    }
    int minCost(int n, vector<int>& cuts) {
        int i = 1 ;
        int j = cuts.size() ;
        dp.resize(j+1 , vector<int> (j+1, -1));
        cuts.push_back(n);
        cuts.insert(cuts.begin() , 0);
        sort(cuts.begin() , cuts.end());

        return f(i , j, cuts);

    }
};                      
int main(){
    
    return 0;
}