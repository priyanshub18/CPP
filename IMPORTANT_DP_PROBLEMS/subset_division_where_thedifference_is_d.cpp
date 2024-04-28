#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
#include <bits/stdc++.h> 
int mod  =(int)(1e9 + 7);
int f(int idx , int s,vector<int>& arr){
    if(idx == 0){
        if(s == 0 and arr[0] == 0) return 2;
        if(s == 0 or s == arr[0]) return 1;
        return 0;
    }

	int notpick = f(idx -1 , s, arr);
	int pick = 0;
	if(arr[idx] >= s) pick = f(idx-1 , s-arr[idx] , arr);

	return (notpick + pick) % mod;
 }
 int findWays(vector<int>& arr, int k)
{		
	int n = arr.size();
	return f(n-1 , k, arr);
	
}
int countPartitions(int n, int d, vector<int> &arr) {
    int totSum = 0;
    for(int ele : arr){
        totSum += ele;
    }
    if((totSum- d)% 2  or totSum - d < 0  ) return 0;
    
    return findWays(arr, (totSum - d)/2);
}


                    
int main(){
    
    return 0;
}