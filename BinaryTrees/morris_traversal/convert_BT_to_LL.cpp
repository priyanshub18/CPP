#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution {
public:
    TreeNode* prev = NULL;
    void flatten(TreeNode* root) {
        
        if( not root ) return ;
        flatten(root->right);
        flatten(root->left);

        root->right = prev;
        root->left = NULL;
        prev = root;

    }
};            
int main(){
    
    return 0;
}