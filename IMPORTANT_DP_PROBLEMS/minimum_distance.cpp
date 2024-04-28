#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution {
public:
    vector<vector<int> > dp;
    int f(int i , int j , string s, string t){
        if(i < 0) return j+1;
        if(j < 0 )return i+ 1;
        //these base cases are one of the most important ones 
        if(dp[i][j] != -1) return dp[i][j];
        if(s[i] == t[j]) return dp[i][j] = f(i-1, j-1 , s, t);
        return dp[i][j] = min(1 + f(i-1 , j ,s, t) , min(1 + f(i-1 , j-1, s,t) , 1 + f(i , j-1 , s,t)));
    }


    int minDistance(string s, string t) {
        int n = s.length();
        int m = t.length();
        dp.resize(n , vector<int>(m , -1));
        //return f(n-1 , m-1 , s, t);



        int n = s.length();
        int m = t.length();
        dp.resize(n+1 , vector<int>(m+1 , -1));

        //return f(n , m , s, t);


        //bottom up solution

        for(int i = 0 ; i <= n ; i++) dp[i][0] = i;
        for(int j = 0 ; j <= m ; j++) dp[0][j] = j;

        for(int i = 1 ; i <= n ; i++){
            for(int j = 1 ; j <= m ; j++){
                if(s[i-1] == t[j-1]) dp[i][j] = dp[i-1][j-1];
                else  dp[i][j] = min(1 + dp[i-1][j] , min(1 + dp[i-1][j-1] , 1 + dp[i][j-1]));
    }
            }

            return dp[n][m];
        }

    };                      
int main(){
    
    return 0;
}