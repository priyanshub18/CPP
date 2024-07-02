#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution {
public:
    vector<int> ans;
    void f(TreeNode* node , int level){
        if(node == NULL) return ;

        if(level == ans.size()){
            ans.push_back(node->val);
        }

        f(node->right , level +1);
        f(node->left , level +1);
    }
    vector<int> rightSideView(TreeNode* root) {
        f(root , 0);
        return ans;

    }
};            
int main(){
    
    return 0;
}