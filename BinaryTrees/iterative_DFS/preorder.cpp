#include<bits/stdc++.h>
#include<vector>class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
         vector<int> ans;
         if(root == NULL ) return ans;
        stack<TreeNode* > st;
        st.push(root);

        while(not st.empty()){
            TreeNode* top = st.top();
            st.pop();
            ans.push_back(top->val);

            if(top->right) st.push(top->right);
            if(top->left) st.push(top->left);

        }

        return ans;
    }
};
                    
using namespace std;
            
int main(){
    
    return 0;
}