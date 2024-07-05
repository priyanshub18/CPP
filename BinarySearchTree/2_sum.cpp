#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;

class bstIterator {
    stack<TreeNode*> myStack;
    bool reverse = true;

public:
    bstIterator(TreeNode* root, bool isReverse) {
        reverse = isReverse;
        pushAll(root);
    }
    bool hasNext() { return !myStack.empty(); }
    int next() {
        TreeNode* temp = myStack.top();
        myStack.pop();
        if (reverse) {
            pushAll(temp->left);
        } else {
            pushAll(temp->right);
        }
        return temp->val;
    }

private:
    void pushAll(TreeNode* node) {
        for (; node != NULL;) {
            myStack.push(node);
            if (reverse) {
                node = node->right;
            } else {
                node = node->left;
            }
        }
    }
};
class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        if (!root)
            return false;
        bstIterator l(root, false);
        bstIterator r(root, true);
        int i = l.next();
        int j = r.next();
        while (i < j) {
            if (i + j == k)
                return true;
            else if (i + j > k) {
                j = r.next();
            } else {
                i = l.next();
            }
        }
        return false;
    }
};            
int main(){
    
    return 0;
}