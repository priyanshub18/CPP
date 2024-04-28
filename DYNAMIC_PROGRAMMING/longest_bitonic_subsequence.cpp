#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
int longestBitonicSubsequence(vector<int>& nums, int n)
{
        vector<int> dp1(n , 1);
        int maxi = 0;
        for(int i = 0 ; i < n ; i++){
            for(int pr = 0 ; pr < i ; pr ++){
                if(nums[pr] < nums[i] and 1 + dp1[pr] > dp1[i]){
                    dp1[i] = max(dp1[i] , 1 + dp1[pr]);
                }
            }
        }


        vector<int> dp2(n , 1);
        for(int i = n-1 ; i >= 0  ; i--){
            for(int pr = n-1 ; pr > i ; pr--){
                if(nums[pr] < nums[i] and 1 + dp2[pr] > dp2[i]){
                    dp2[i] = max(dp2[i] , 1 + dp2[pr]);
                }
            }
        }

		vector<int> bitonic(n);
		for(int i = 0 ; i < dp1.size(); i++){
			bitonic[i] = dp1[i] + dp2[i]-1;
			maxi = max(maxi , bitonic[i]);
		}


		return maxi;
}
                  
int main(){
    
    return 0;
}