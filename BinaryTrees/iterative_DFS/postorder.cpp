#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*> st;
        if(root) st.push(root);
        while(st.size()> 0 ){
            TreeNode* temp = st.top();
            st.pop();
            ans.push_back(temp->val);
           
            if(temp->left) st.push(temp->left);
             if(temp->right) st.push(temp->right);
            
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};            
int main(){
    
    return 0;
}