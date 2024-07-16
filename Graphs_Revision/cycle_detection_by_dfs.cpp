#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  private:
    bool detect(int src ,int par ,  vector<int> adj[] , int vis[]){
        vis[src] = 1;
        
        for(auto el : adj[src]){
            if(not vis[el]){
                
                if(detect(el , src , adj , vis)) return true ;
            }
            else if(el != par){
                return true;
            }
        }
        return false;
    }
  public:
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        int vis[V] = {0};
        for(int i = 0 ; i < V ; i++){
            
            if( not vis[i]){
            if (detect(i ,-1, adj , vis)) return true;
            }
    }
    return false;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends            
int main(){
    
    return 0;
}