#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(not root) return 0;

        int ans = 0;
        queue<pair<TreeNode* , int > > q;
        q.push({root , 0});

        while(! q.empty()){
            int s = q.size();
            int mmin = q.front().second;

            long long  first , last;

            for(int i = 0 ; i < s ;i ++){
                long long curr = q.front().second - mmin;
                TreeNode* node = q.front().first;

                q.pop();

                if(i == 0) first = curr;
                if(i == s - 1) last = curr;
                if(node->left) q.push({node->left , curr * 2 +1});
                if(node->right) q.push({node->right , curr * 2 +2});
            }
            ans = max(ans , (int)(last - first +1));
        }
        return ans;
    }
};            
int main(){
    
    return 0;
}