#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
#define pp pair<int , pair<int , int > > 
class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<vector<pair<int , int > > > adj(n);
        for(auto el : flights){
            adj[el[0]].push_back({el[1] , el[2]});
        }

        priority_queue<pp , vector<pp> , greater<pp > > pq;

        vector<int> dist(n , 1e9);
        dist[src] = 0;
        pq.push({0 , {0 , src}});
        while(not pq.empty()){
            auto top = pq.top();
            pq.pop();
            int stop = top.first;
            int d = top.second.first;
            int node = top.second.second;



            for(auto el : adj[node]){
                
                if(d + el.second < dist[el.first] and stop <= k){
                    dist[el.first] = d + el.second;
                    pq.push({1 + stop,{dist[el.first] ,el.first}});
                }
            }
        }
        return dist[dst] == 1e9 ? -1 : dist[dst];
    }
};            
int main(){
    
    return 0;
}