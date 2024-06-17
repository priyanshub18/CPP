#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution {
public:
vector<vector<int>> fourSum(vector<int>& nums, int target) {
    vector<vector<int>> ans;
    int n=nums.size();
    sort(nums.begin(),nums.end());
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            long long target2=(long)(long(target-nums[i])-nums[j]);
            int s=j+1;
            int e=n-1;
            while(s<e){
                int sum=nums[s]+nums[e];
                if(sum<target2)
                    s++;
                else if(sum>target2)
                    e--;
                else{
                     vector<int>temp;
                     temp.push_back(nums[i]);
                     temp.push_back(nums[j]);
                     temp.push_back(nums[s]);
                     temp.push_back(nums[e]);
                     ans.push_back(temp);
                    while(s<e && temp[2]==nums[s])++s;
                    
                    while(s<e && temp[3]==nums[e])--e;
                            
                }
            }
            while(j+1<n && nums[j+1] == nums[j])++j;
        }
        while(i+1<n && nums[i+1] == nums[i])++i;
    }
    return ans;
}
};                 
int main(){
    
    return 0;
}