#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution {
  public:
    vector<int> bellman_ford(int V, vector<vector<int>>& edges, int S) {
       vector<int> dis(V , 1e8);
       
        dis[S] = 0;
       for(int i = 0; i < V-1 ; i++){
           for(auto el : edges){
               int u = el[0];
               int v = el[1];
               int w = el[2];
               
               if(dis[u] != 1e8 and dis[u] + w < dis[v]){
                   dis[v] = dis[u] + w;
               }
           }
       }
       
       //Nth relax to check negative cycle
       for(auto el : edges){
               int u = el[0];
               int v = el[1];
               int w = el[2];
               
               if(dis[u] != 1e8 and dis[u] + w < dis[v]){
                   return {-1};
               }
           }
       
       
       return dis;
    }
};            
int main(){
    
    return 0;
}