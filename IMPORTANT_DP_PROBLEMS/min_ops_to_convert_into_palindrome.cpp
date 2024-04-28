#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution {
public:
    int minInsertions(string s) {
    string a = s;
    string b = s;
    reverse(b.begin() , b.end());
    int m = a.size();
    int n = b.size();
    vector<vector<int> > dp;
    dp.resize(m+1 , vector<int>(n+1 , -1));

    for(int i = 0 ; i <= m ; i++ ) dp[i][0] = 0;
    for(int j = 0 ; j <= n ; j++ ) dp[0][j] = 0;
    for(int i = 1  ; i <= m ; i++){
        for(int j = 1 ; j <= n ; j++){
        int ans = 0;
        if(a[i-1] == b[j-1]) ans=  1 + dp[i-1][j-1];
        else ans = max(dp[i-1][j] , dp[i][j-1]);
            dp[i][j] = ans;
        }
    }
    int len =  dp[m][n];


    return s.length() - len;
    }
};                    
int main(){

    return 0;
}