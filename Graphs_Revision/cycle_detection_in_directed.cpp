#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> vis;
    vector<int> path;
    bool dfs(int v , vector<int> adj[] ){
        vis[v]  = 1;
        path[v] = 1;
        
        
        for(int el : adj[v]){
            if(!vis[el]){
                if(dfs(el , adj)) return true;
            }
            else if(path[el]) return true;;
        }
        path[v] = 0;
        return false;
    }
    bool isCyclic(int V, vector<int> adj[]) {
       vis.resize(V);
       path.resize(V);
       
       for(int i = 0 ; i < V ; i++){
           if(not vis[i])
                if ( dfs(i , adj)) return true;
       }
       return false;
    }
    
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends            
int main(){
    
    return 0;
}