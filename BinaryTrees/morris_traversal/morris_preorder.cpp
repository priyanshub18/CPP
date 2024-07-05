#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
vector<int> preOrderTraversal(TreeNode* root) {
        //morris traversal

        vector<int> preorder;
        TreeNode* curr = root;

        while(curr){
            if(!curr->left){
                preorder.push_back(curr->val);
                curr = curr->right;
            }

            else{
                TreeNode* prev = curr->left;
                while(prev->right and prev->right != curr){
                    prev = prev->right;
                }
                if(prev->right == NULL){
                    prev->right = curr;
                    preorder.push_back(curr->val);
                    curr = curr->left;
                }
                else{
                    prev->right = NULL;
                    curr = curr->right;
                }
            }
        }
        return preorder;

        //just a change of a single line to get the answer
    }            
int main(){
    
    return 0;
}