#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& adj) {
        int V = adj.size();
        vector<vector<int>> graph(V);
        vector<int> indegree(V);

		for (int i = 0; i < V; i++) {
			for (auto it : adj[i]) {
                
				graph[it].push_back(i);
                indegree[i]++;
			}
		}
		queue<int> q;
		for (int i = 0; i < V; i++) {
			if (indegree[i] == 0) {
				q.push(i);
			}
		}
		vector<int> ans;
		while (!q.empty()) {
			int node = q.front();
			q.pop();
            ans.push_back(node);

			for (auto it : graph[node]) {
				indegree[it]--;
				if (indegree[it] == 0) q.push(it);
			}
		}


        
        sort(ans.begin() , ans.end());
        return ans;
    }
};            
int main(){
    
    return 0;
}