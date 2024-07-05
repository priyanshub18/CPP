#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class NodeValue{
    public:
    int minNode ; 
    int maxNode ; 
    int  maxSize;
    NodeValue(int minNode , int maxNode , int  maxSize){
        this->minNode = minNode;
        this->maxNode = maxNode;
        this->maxSize = maxSize;
    }
};
class Solution{
    public:
    NodeValue helper(Node* root){
        if(!root) return NodeValue(INT_MAX , INT_MIN , 0);
        //get values from left and right
        
        auto left = helper(root->left);
        auto right = helper(root->right);
        
        
        if(left.maxNode < root->data and root->data < right.minNode){
            //this is a bst
            return NodeValue(min(root->data , left.minNode) , max(root->data , right.maxNode) , 
                        left.maxSize + right.maxSize + 1);
                        
                        
        }
        else {
            return NodeValue(INT_MIN , INT_MAX , max(left.maxSize , right.maxSize ));
        }
    }
    int largestBst(Node *root)
    {
        return helper(root).maxSize;
    }
};            
int main(){
    
    return 0;
}