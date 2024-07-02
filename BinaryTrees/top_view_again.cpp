#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution
{
    public:
    vector<int> topView(Node *root)
    {
       vector<int> ans;
       if(root == NULL) return ans;
       
       map<int , int > mp;
       
       queue<pair<Node* , int> > q;
       q.push({root , 0});
       
       while(not q.empty()){
           auto top = q.front();
           q.pop();
           
           if(mp.find(top.second) == mp.end()){
               mp[top.second] = top.first->data;
           }
           if(top.first->left){
               q.push({top.first->left , top.second - 1});
           }
           if(top.first->right){
               q.push({top.first->right , top.second + 1});
           }
       }
       
       
       for(auto el : mp){
           ans.push_back(el.second);
       }
       
       return ans;
    }

};            
int main(){
    
    return 0;
}