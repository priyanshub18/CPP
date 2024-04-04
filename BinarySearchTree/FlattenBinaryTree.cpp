
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 
 class Solution {
public:
    void preorder(TreeNode* root , vector<TreeNode*>& ans){
        if(root == NULL) return ;
        ans.push_back(root);

        preorder(root->left,ans);
        preorder(root->right,ans);
    } 
    void flatten(TreeNode* root) {
         vector<TreeNode*> ans;
        preorder(root, ans);

          int n = ans.size();
          for(int i = 0 ; i < n-1 ; i++){
              ans[i]->right = ans[i+1];
              ans[i]->left = NULL;            
            
            }
    }
};
class Solution {
public:
    void flatten(TreeNode* root) {
        if(root == NULL) return ;
        TreeNode* l = root->left;
        TreeNode* r = root->right;
        root->left = NULL;
        root->right = NULL;

        flatten(l);
        flatten(r);

        root->right = l;
        TreeNode* temp = root;
        while(temp->right != NULL) temp = temp->right;

        temp->right = r;



        
          
          
          
            }
};
class Solution {
public:
    void flatten(TreeNode* root) {
        TreeNode* curr = root;
        while(curr){
            if(curr->left ){
                //save the right

                TreeNode* r = curr->right;
                curr->right = curr->left;
                //finding pred
                TreeNode* pred = curr->left;
                while(pred->right) pred = pred->right;

                //link
                pred->right = r;
                curr = curr->left;
            }
            else{
                curr = curr->right;
            }
        }
        TreeNode* temp = root;
        while(temp){
            temp->left = NULL;
            temp = temp->right;
        }
    }
};