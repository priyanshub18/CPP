#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution {
public:
    vector<vector<int>> result ;
    void f(vector<int>& cand, int t , int idx , vector<int> &subset){
        if(t == 0 ){
            //we found a subset bhaii
            result.push_back(subset);
            return;
        }
        if(idx == cand.size()) return ;
        if(cand[idx] <= t){
            subset.push_back(cand[idx]);
            f(cand , t - cand[idx] , idx + 1 , subset);
            subset.pop_back();
        }
        //not picking ki call
        int j = idx+1;
        while(j < cand.size()  and cand[j] == cand[j-1]) j++;
        f(cand , t , j , subset);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin() , candidates.end());
        vector<int> subset;
        f(candidates , target , 0, subset);
        return result;
    }
};                       
int main(){
    
    return 0;
}