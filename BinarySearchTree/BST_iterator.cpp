#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class BSTIterator {
public:
    stack<TreeNode* > st;
    BSTIterator(TreeNode* root) {
        TreeNode* temp = root;
        st.push(temp);
        while(temp->left){
            temp = temp->left;
            st.push(temp);
        }
    }
    
    int next() {
        TreeNode* ans = st.top();
        st.pop();
        TreeNode* node = ans;
        if(node->right){
            st.push(node->right);
            node = node->right;

            while(node->left){
                node = node->left;
                st.push(node);
            }
            
        }
        return ans->val;
    }
    
    bool hasNext() {
       return !st.empty(); 
    }
};
            
int main(){
    
    return 0;
}