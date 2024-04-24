#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
#include <bits/stdc++.h> 

int f(int idx , int rw,vector<int> w, vector<int> v,vector<vector<int> >& dp){
	if(rw == 0) return  0;
	if(idx == 0){
		if(w[0] <=  rw) return v[0];
		return 0;
	}
	if(dp[idx][rw] != -1 ) return dp[idx][rw];
	int notTake = f(idx - 1 , rw,w, v,dp);
	int take = INT_MIN;
	if(w[idx] <= rw){
		take = max(take, v[idx] + f(idx -1 , rw - w[idx],w,v,dp));

	}
	cout<<take<<" "<<notTake<<'\n';

	return dp[idx][rw] =max(take , notTake);
}
int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	vector<vector<int> > dp(n , vector<int>(maxWeight+1 , -1));
	return f( n -1 , maxWeight , weight, value,dp);
	


//let me see if the changes happens or not
}                        
int main(){
    
    return 0;
}