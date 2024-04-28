#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
                        
int main(){
    vector<int> nums {5 ,4 ,11 ,1 ,16 , 8};
    int n = nums.size();

    vector<int> dp(n , 1), hash(n);  
    int maxi = 1;
    int lastindex = 0;
    for(int i = 0 ; i < n ; i++){
        hash[i] = i;
        for(int pr = 0 ; pr < i ; pr ++){
            if(nums[pr] < nums[i] and 1 + dp[pr] > dp[i]){
                dp[i] = max(dp[i] , 1 + dp[pr]);
                hash[i] = pr;
            }
        }
        if(dp[i] > maxi){
            maxi = dp[i];
            lastindex = i;
        }   
    }
    vector<int> temp;
    temp.push_back(nums[lastindex]);
    while(hash[lastindex] != lastindex){
        lastindex = hash[lastindex];
        temp.push_back(nums[lastindex]);

    }
    reverse(temp.begin() , temp.end());

    for(auto ele : temp){
        cout<<ele<<" ";
    }
    return 0;
    
}
   
