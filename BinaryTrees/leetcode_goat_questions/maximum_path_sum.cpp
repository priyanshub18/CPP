#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution {
public:
    int helper(TreeNode* root , int &maxi){
        if(root == NULL) return 0;

        int lh = max(0 , helper(root->left , maxi));
        int rh =max(0 , helper(root->right , maxi));
        maxi = max(maxi , root->val + lh + rh);

        return root->val + max(lh , rh);
    }
    int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN;
        helper(root , maxi);
        return maxi;
    }
};            
int main(){
    
    return 0;
}