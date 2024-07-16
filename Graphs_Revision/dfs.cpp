#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
    vector<int> ans;
    vector<int> vis;
    void dfs(vector<int> adj[] , int node){
        
        ans.push_back(node);
        for(auto ele : adj[node]){
            if(! vis[ele]){
                vis[ele] = 1;
                dfs(adj , ele);
            }
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vis.resize(V);
        vis[0] = 1;
        dfs(adj , 0);
        return ans;
    }
};           
int main(){
    
    return 0;
}