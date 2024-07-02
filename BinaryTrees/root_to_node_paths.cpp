#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution {
  public: 
    vector<vector<int>> ans;
    void dfs(Node* root , vector<int>& path){
        if(root->left== NULL and root->right== NULL){
            path.push_back(root->data);
            ans.push_back(path);
            path.pop_back();
            return;
        }
        
        path.push_back(root->data);
        if(root->left)dfs(root->left , path);
        if(root->right)dfs(root->right , path);
        
        path.pop_back();
        
    }
    vector<vector<int>> Paths(Node* root) {
       vector<int> path;
       
       dfs(root , path);
       return ans;
    }
};
            
int main(){
    
    return 0;
}