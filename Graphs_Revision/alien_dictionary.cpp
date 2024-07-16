#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
string findOrder(string dict[], int N, int K) {
        vector<vector<int>> adj(K);
        
        for(int i = 0 ; i < N-1 ; i++){
            string one = dict[i];
            string two = dict[i+1];
            
            
            int t = 0;
            while(one[t] == two[t] and t < one.size() and t < two.size()) t++;
            if( t < one.size() and t < two.size() )adj[one[t]-'a'].push_back(two[t] - 'a');
        }
        
        //apply topo sort here
        int V = K;
        int indegree[K] = {0};
		for (int i = 0; i < V; i++) {
			for (auto it : adj[i]) {
				indegree[it]++;
			}
		}

		queue<int> q;
		for (int i = 0; i < V; i++) {
			if (indegree[i] == 0) {
				q.push(i);
			}
		}
		vector<int> topo;
		while (!q.empty()) {
			int node = q.front();
			q.pop();
			topo.push_back(node);

			for (auto it : adj[node]) {
				indegree[it]--;
				if (indegree[it] == 0) q.push(it);
			}
		}
        string ans = "";
        
        for(int i = 0 ; i < topo.size() ; i++){
            ans += (topo[i] + 'a');
        }
		return ans;
    }            
int main(){
    
    return 0;
}