#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution
{
    #define pp pair<int , int >
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        priority_queue<pp  , vector<pp> , greater<pp> > pq;
        vector<int> vis(V , 0);
        
        pq.push({0 , 0});
        int ans = 0;
        while(not pq.empty()){
            auto top = pq.top();
            pq.pop();
            
            int wt = top.first;
            int node = top.second;
            if(vis[node] == 1) continue;
            
            
            
            vis[node] = 1;
            ans += wt;
            for(auto it : adj[node]){
                int adn = it[0];
                int edw = it[1];
                if(not vis[adn]){
                    pq.push({edw , adn});
                }
            }
            
        }
        return ans;
    }
};            
int main(){
    
    return 0;
}