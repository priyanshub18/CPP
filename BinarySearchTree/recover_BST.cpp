#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution {
public:

   TreeNode* first;
   TreeNode* first_next ;
   TreeNode* last ;
   TreeNode* previous_node;

    void inorderTraversal(TreeNode* root) {

        if(!root) return;

        inorderTraversal(root->left);

        if(previous_node != nullptr && (root->val < previous_node->val)){

            if(!first){
                first = previous_node;
                first_next = root;
            }

            else last = root;
        }

        previous_node = root;
        inorderTraversal(root->right);

        
    }
    void recoverTree(TreeNode* root) {
       first = first_next = last = nullptr;
       previous_node = new TreeNode(INT_MIN);
       inorderTraversal(root);
       

       if(first && last) swap(first->val, last->val);
       else if(first && first_next) swap(first->val, first_next->val);
        
    }
};            
int main(){
    
    return 0;
}