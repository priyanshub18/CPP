#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<pair<int,int>>adj[n+1];
        for(auto it:times)
        {
            adj[it[0]].push_back({it[1],it[2]});

        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;
        vector<int>dis(n+1,INT_MAX);
        dis[k]=0;
        q.push({0,k});
        while(!q.empty())
        {
            int node=q.top().second;
            int dt=q.top().first;
            q.pop();
            for(auto it:adj[node])
            {
                int dist=dt+it.second;
                if(dis[it.first]>dist)
                {
                    dis[it.first]=dist;
                    q.push({dist,it.first});
                }
            }
        }
        int ans=INT_MIN;
      for(int i=1;i<=n;i++)
      {
         
         
           if(dis[k]==0 && dis[i]==INT_MAX)
           {
              
              return -1;
              
           }
           else
           {
                 ans=max(ans,dis[i]);
           }
         
         
      }
      return ans;
    }
};            
int main(){
    
    return 0;
}