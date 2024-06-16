#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;

int longestSubarrayWithSumK(vector<int> a , long long k){
    unordered_map<int , int > mp;
    long long sum = 0;
    int maxLen = 0;
    for(int i = 0 ; i < a.size() ;i++){
        sum += a[i];
        if(sum == k ){
            maxLen = max(maxLen , i+1);
        }
        int rem = sum - k ;
        if(mp.find(rem) != mp.end()){
            maxLen = max(maxLen , i - mp[rem]);
        }

        //i only updte the map once in case of zeroes ar aayi to 
        if(mp.find(sum) == mp.end()){
            mp[sum] = i;
        }
    }
}                      
int main(){
    //contains both postives and negatives

    return 0;
}