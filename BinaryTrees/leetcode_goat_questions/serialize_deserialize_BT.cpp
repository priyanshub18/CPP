#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(not root) return "";

        string s = "";
        queue<TreeNode* > q;
        q.push(root);

        while(! q.empty()){
            TreeNode* curr = q.front();
            q.pop();
            if(curr == NULL) s += "#,";
            else s.append(to_string(curr->val) + ',');
            if(curr){
                q.push(curr->left);
                q.push(curr->right);
            }
        }
        return s;
    }
    TreeNode* deserialize(string data) {
        if(data.length() == 0) return NULL;
        stringstream s(data);
        string str;
        getline(s , str , ',');
        TreeNode* root = new TreeNode(stoi(str));
        queue<TreeNode* > q;
        q.push(root);

        while(! q.empty()){
            TreeNode* node = q.front();
            q.pop();

            getline(s ,str , ',');
            if(str == "#"){
                node->left = NULL;
            }
            else{
                TreeNode* left = new TreeNode(stoi(str));
                node->left = left;
                q.push(left);
            }
            getline(s ,str , ',');
            if(str == "#"){
                node->right = NULL;
            }
            else{
                TreeNode* right = new TreeNode(stoi(str));
                node->right = right;
                q.push(right);
            }
        }
        return root;
    }
};
            
int main(){
    
    return 0;
}