#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
#include<bits/stdc++.h>
int f(int i , int rm , vector<int> &val, vector<int> &w,vector<vector<int> >& dp ){
    //if(rm == 0) return 0;
    if(i == 0) {
        return ((int)(rm / w[0]) * val[0]);
    }
    if(dp[i][rm] != -1 ) return dp[i][rm];
    int nottake = f(i -1 , rm , val , w,dp);
    int take = 0;

    if(w[i] <= rm){
        take = val[i] + f(i , rm - w[i ] , val , w,dp);
    }

    return dp[i][rm]=  max(take, nottake);
}
int unboundedKnapsack(int n, int w, vector<int> &profit, vector<int> &weight){
    vector<vector<int> > dp(n  ,vector<int>(w +1, -1 ));
    return f(n-1 , w , profit , weight,dp);
}                  
int main(){
    
    return 0;
}