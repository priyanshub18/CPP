#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
#define pp pair<int,int> 
class Solution
{
    
	public:
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        priority_queue<pp , vector<pp> , greater<pp> > pq;
        
        vector<int> dis(V , 1e9);
        
        
        dis[S] = 0;
        pq.push({0 , S});
        
        while(not pq.empty()){
            auto top = pq.top();
            pq.pop();
            
            int dist = top.first;
            int node = top.second;
            // if(top.first < dis[i]){
            //     dis[i] = top.first;
            // }
            for(auto el : adj[node]){
                int edgew = el[1];
                int adjn = el[0];
                if(dist + edgew < dis[adjn]){
                    dis[adjn] = dist + edgew;
                    pq.push({dis[adjn] , adjn});
                }
            }
            
            
        }
        return dis;
        
        
    }
};            
int main(){
    
    return 0;
}