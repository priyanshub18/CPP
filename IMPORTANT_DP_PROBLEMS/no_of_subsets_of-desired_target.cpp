#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
                        
int main(){
    
    return 0;
}

#include <bits/stdc++.h>
int f(int idx , int s,vector<int>& arr){
	//if(s == 0 ) return 1;
    //this base case would not work for the case of zeroes in the array

	//if(idx == 0) return (arr[0] == s)? 1 : 0;  this is for the case of no zeroes in the array

    if(idx == 0){
        if(s == 0 and arr[0] == 0) return 2;
        if(s == 0 or s == arr[0]) return 1;
        return 0;
    }

	int notpick = f(idx -1 , s, arr);
	int pick = 0;
	if(arr[idx] >= s) pick = f(idx-1 , s-arr[idx] , arr);

	return notpick + pick ;
 }
int findWays(vector<int>& arr, int k)
{		
	int n = arr.size();
	return f(n-1 , k, arr);
	
}
#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
                        
int main(){
    
    return 0;
}
int mod=1e9+7;
int findWays(vector<int>& arr, int k)
{
    // Using Tabulation : Bottom up Approach
    
    int n=arr.size();
    vector<vector<int>>dp(n,vector<int>(k+1,0));


    for(int i=0;i<n;i++)
    {dp[i][0]=1;}


    if(arr[0]<=k)
    {dp[0][arr[0]]=1;}


    dp[0][0]=arr[0]?1:2;    


    for(int i=1;i<n;i++)
    {
        for(int j=0;j<=k;j++)
        {
             int notTake = dp[i-1][j];
             int take = false;
             
             if(arr[i]<=j)
             {take=dp[i-1][j-arr[i]];}


             dp[i][j]=( take + notTake )%mod;
        }
    }


        return dp[n-1][k];

}