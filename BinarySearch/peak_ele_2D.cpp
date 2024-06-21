#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution {
public:
    int findMaxIndex(vector<vector<int>>& mat, int n, int m, int col) {
        int maxValue = -1;
        int idx = -1;
        for (int i = 0; i < n; i++) {
            if (mat[i][col] > maxValue) {
                maxValue = mat[i][col];
                idx = i;
            }
        }
        return idx;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int lo = 0, hi = m - 1;

        while (lo <= hi) {
            int mid = (lo + hi) / 2;
            int ri = findMaxIndex(mat, n, m, mid);
            int left = mid - 1 >= 0 ? mat[ri][mid - 1]:-1;
            int right = mid + 1 < m ? mat[ri][mid + 1]:-1;
            if(mat[ri][mid] > left and mat[ri][mid] > right){
                return {ri , mid};
            }
            else if(mat[ri][mid] < left){
                hi = mid -1;
            }
            else lo = mid +1;
        }

        return {-1,-1};
    }
};            
int main(){
    
    return 0;
}