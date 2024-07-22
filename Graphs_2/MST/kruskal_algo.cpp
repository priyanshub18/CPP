#include <bits/stdc++.h>
#include <vector>
#include DSU_by_rank.cpp
using namespace std;
class DisjointSet
{
    public:
    vector<int> rank, par;

    DisjointSet(int n)
    {
        rank.resize(n, 0);
        par.resize(n, 0);
        for (int i = 0; i < n; i++)
            par[i] = i;
    }

    int findParent(int node)
    {
        if (node == par[node])
            return node;
        return par[node] = findParent(par[node]); // fucking path compression
    }

    void UnionByRank(int u, int v)
    {
        u = findParent(u);
        v = findParent(v);

        if (u == v)
            return;

        if (rank[u] > rank[v])
        {
            par[v] = u;
        }
        else if (rank[u] < rank[v])
        {
            par[u] = v;
        }
        else
        {
            par[u] = v;
            rank[v]++; // only where the rank grows
        }
    }
};
class Solution
{
    #define pp pair<int , int >
	public:
	
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        vector<pair<int , pair< int , int > > > v;
        for(int i = 0 ; i < V ; i++){
            
            for(auto el : adj[i]){
                v.push_back({el[1] , {i , el[0]}});
            }
        }
        
        sort(v.begin() , v.end());
        int ans = 0;
        DisjointSet d(V);
        
      
            for(auto el : v){
                int u = el.second.first;
                int v = el.second.second;
                int wt = el.first;
                
                if(d.findParent(u) != d.findParent(v)){
                    d.UnionByRank(u , v);
                    ans += wt;
                }
           }
        
        return ans;
    }
};



int main()
{

    return 0;
}