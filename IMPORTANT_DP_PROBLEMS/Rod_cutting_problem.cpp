#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
int f(int idx , int N , vector<int>& price,vector<vector<int> > &dp){
	if(idx == 0){
		return (N* price[0]);
	}
	if(dp[idx][N] != -1) return dp[idx][N];
	int nottake = f(idx - 1 , N , price,dp);
	int take = 0;
	int rodlen = idx + 1 ;
	if(rodlen <= N) take = price[idx] + f(idx , N - rodlen, price,dp);

	return dp[idx][N] = max(nottake , take);
}
int cutRod(vector<int> &price, int n)
{	
	vector<vector<int > > dp(n , vector<int> ( n+1 , -1));
	
	return f(n-1 , n , price, dp);
}
                       
int main(){
    
    return 0;
}