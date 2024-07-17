#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
#define pp pair<long long  , int >
#define mod (int)(1e9 + 7)
class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        vector<pair<long long , long long > > adj[n];

        for(auto el : roads){
            adj[el[0]].push_back({el[1] , el[2]});
            //since it is bi-direc;
            adj[el[1]].push_back({el[0] , el[2]});
        }

        priority_queue<pp , vector<pp> , greater<pp> > pq;

        vector<long long> dis(n , LLONG_MAX) , path(n , 0);
        dis[0] = 0;
        path[0] = 1;
        pq.push({dis[0] , 0});
        while(not pq.empty()){
            long long dist = pq.top().first;
            long long node = pq.top().second;

            pq.pop();


            for(auto el : adj[node]){
                if(dist + el.second < dis[el.first]){
                    dis[el.first] = dist + el.second;
                    path[el.first] = path[node];
                    pq.push({dis[el.first] , el.first});

                }

                else if(dist + el.second == dis[el.first]){
                    path[el.first] = (path[el.first] + path[node]) % mod;
                }
            }
        }
        return path[n-1] %(int)(1e9 + 7);


    }
};            
int main(){
    
    return 0;
}