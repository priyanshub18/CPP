#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution {
  public:
    vector<int> vis;
    void topo(int v ,  vector<vector<pair<int , int > > >& adj , stack<int>& st){
        vis[v] = 1;
        
        for(auto el : adj[v]){
            if(not vis[el.first]){
                topo(el.first , adj,st);
                }
        }
        st.push(v);
        
    }
    vector<int> shortestPath(int V,int M, vector<vector<int>>& edges){
         //create a graph pehle to 
         vector<vector<pair<int , int > > > adj(V);
         for(int i = 0 ;  i < M ; i++){
             adj[edges[i][0]].push_back({edges[i][1] , edges[i][2]});
         }
        //dfs se topo sort
        vis.resize(V);
        stack<int> st;
        
        for(int i = 0 ; i < V;i++){
            if(not vis[i]){
                topo(i , adj , st);
            }   
        }
        
        
		
		
		vector<int> dis(V , 1e9);
		dis[0] = 0;
		
		while(not st.empty()){
    		int i = st.top();
    		st.pop();
		    for(auto el : adj[i]){
		        int w = dis[i] + el.second;
		        dis[el.first] = min(w , dis[el.first] );
		    }
		}
		for(int i = 0 ; i < V ; i++){
		    if(dis[i] == 1e9){
		        dis[i] = -1;
		    }
		}
		
		return dis;
		
    }
};            
int main(){
    
    return 0;
}