#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution {
public:
    vector<vector<int>> ans;
    void f(vector<int>& v , int k ,int n , vector<int>& a, int idx){
        
        if(k == 0 and n == 0){
            ans.push_back(a);
            return;
        }
        if(idx >= 9) return;
        a.push_back(v[idx]);
        f(v , k-1 , n - v[idx],a , idx+1);
        a.pop_back();
        f(v, k , n ,a, idx+1);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> v,a;
        for(int i= 1 ; i <= 9 ; i++){
            v.push_back(i);
        }
        f(v , k ,n ,a,0);
        return ans;
    }
};                      
int main(){
    
    return 0;
}