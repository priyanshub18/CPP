#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if (!root)
            return NULL;
        if (root->val == key)
            return helper(root);
        TreeNode* temp = root;
        while (root) {
            if (root->val > key) {
                if (root->left != NULL && root->left->val == key) {
                    root->left = helper(root->left);
                    break;

                } else
                    root = root->left;

            } else {
                if (root->right != NULL && root->right->val == key) {
                    root->right = helper(root->right);
                    break;
                } else
                    root = root->right;
            }
        }
        return temp;
    }
    TreeNode* helper(TreeNode* root) {
        if (!root->left)
            return root->right;
        else if (!root->right)
            return root->left;
        TreeNode* rightchild = root->right;
        TreeNode* lastright = findlastright(root->left);
        lastright->right = rightchild;
        return root->left;
    }
    TreeNode* findlastright(TreeNode* root) {
        while (root->right)
            root = root->right;
        return root;
    }
};            
int main(){
    
    return 0;
}