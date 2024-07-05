#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution {
public:
    int leftHeight( TreeNode* root){
        int count = 1;
        while(root->left){
            count++;
            root = root->left;
        }
        return count;
    }
    int rightHeight( TreeNode* root){
        int count = 1;
        while(root->right){
            count++;
            root = root->right;
        }
        return count;
    }
    int countNodes(TreeNode* root) {
        if(root == NULL) return 0;
        if(leftHeight(root) == rightHeight(root)){
            return pow(2 , leftHeight(root) ) - 1;
        }
        else{
            return 1 + countNodes(root->left) + countNodes(root->right);
        }
    }
};            
int main(){
    
    return 0;
}