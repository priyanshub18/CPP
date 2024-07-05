#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution{
    public:
   
    int isSumProperty(Node *root)
    {
        if(not root) return 1;
         if(!root->left and !root->right){
            return 1;
        }
        
        if(root->left and !root->right){
            if(root->left->data == root->data){
                return isSumProperty(root->left);
            }
        }
        if(!root->left and root->right){
            if(root->right->data == root->data) {
                return isSumProperty(root->right);
            }
        }
        
        if(root->left and root->right){
            if(root->left->data + root->right->data == root->data) {
                return isSumProperty(root->left) and isSumProperty(root->right);
            }
            else return 0;
        }
    
    }
};            
int main(){
    
    return 0;
}