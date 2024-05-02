#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution {
public:
    vector<vector<vector<int> > > dp;
    int f(int i , int j , int isTrue ,string a){
        if(i > j ) return 0;
        if(i == j ) {
            if(isTrue) return a[i] == 'T';
            else return a[i] == 'F';
        }
        if(dp[i][j][isTrue] != -1) return dp[i][j][isTrue];
        long long ways = 0;
        for(int idx = i +1 ; idx <= j -1 ; idx++){
            int lt = f(i , idx-1 , 1 ,a);
            int lf = f(i , idx-1 , 0 ,a);
            int rt = f(idx+1 , j , 1 ,a);
            int rf = f(idx+1 , j , 0 ,a);


            if(a[idx] == '&'){
                if(isTrue) ways+= (rt * lt);
                else ways += ((rt * lf) + (rf * lf) +( lf * rt));
            }

            if(a[idx] == '|'){
                if(isTrue) ways+= ((rt * lf) + (rt * lt) +( lf * rt));
                else ways += (rf * lf);
            }


            if(a[idx] == '^'){
                if(isTrue) ways+= ((lt*rf) + (lf*rt));
                else ways += ((lf*rf) + (lt*rt));
            }

        }

        return dp[i][j][isTrue] = ways;

    }
    bool parseBoolExpr(string expression) {
        string a = expression;
        int n = a.size();

        dp.resize(n , vector<vector<int>>>(n , vector<int>(2 , -1)));

        return f(0 , a.length() , 1 ,a);
    }
};                      
int main(){
    
    return 0;
}