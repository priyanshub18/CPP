#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
 // class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//         int maxCount = 0;
//         int i = 0;
//         unordered_map<int, int > mp;
//         while(i < nums.size()){
//             mp[nums[i]]++;
//             int numL = nums[i]-1;
//             int leftC = 0;
//             while(mp.find(numL--) != mp.end()){
//                 leftC ++;
//             }
//             int numR = nums[i];
//             int rightC = 0;
//             while(mp.find(numR++) != mp.end()){
//                 rightC ++;
//             }
//             maxCount = max(maxCount , leftC + rightC);
//             i++;
//         }

//         return maxCount;
//     }

// };
// i did redundency in checking in my appraoch rather than use strivers tarrreka
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
     int n=nums.size();
     if(n==0)return 0;
     int l=0;
     unordered_set<int>st;
     for(int i=0;i<n;i++){
         st.insert(nums[i]);
     }
     for(auto it : st){
         if(st.find(it-1)==st.end()){
             int c=1;
             int v=it;
             while(st.find(v+1)!=st.end()){
                 v=v+1;
                 c+=1;
             }
         l=max(l,c);
         }
     }
     return l;}
};                       
int main(){
    
    return 0;
}