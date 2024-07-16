#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
vector<int> bfsOfGraph(int V, vector<int> adj[]) {
            int vis[V] = {0};
            vector<int> ans;
            queue<int> q;
            q.push(0);
            vis[0] = 1;
            
            while(not q.empty()){
                int top = q.front();
                q.pop();
                ans.push_back(top);
                for(auto neig : adj[top]){
                    if(vis[neig] == 0){
                        q.push(neig);
                        vis[neig] = 1;
                    }
                }
            }
            
            return ans;
    }            
int main(){
    
    return 0;
}