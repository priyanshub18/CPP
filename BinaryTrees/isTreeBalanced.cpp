#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution {
public:
    int Level(TreeNode* root){
        if(root == NULL) return 0;
        int lh = Level(root->left) , rh =  Level(root->right) ;
        if(abs(lh - rh) > 1) return -1;
        return  1 + max(lh , rh);
    }
    bool isBalanced(TreeNode* root) {
        if(root == NULL) return true;

        return Level(root)== -1 ? false : true;
    }
};      


int main(){
    
    return 0;
}