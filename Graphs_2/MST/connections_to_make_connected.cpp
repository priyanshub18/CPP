#include<bits/stdc++.h>
#include<vector>
                    
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
    public:
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
class Solution {
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
        int total = connections.size();

        DisjointSet d(n);
        int extras = 0;
        for(auto el : connections){
            if(d.findParent(el[0]) == d.findParent(el[1])) extras++;
            else   d.UnionByRank(el[0] , el[1]);
        }
        

        int cntC = 0;
        for(int i = 0 ;i < n ;i++){
            if(d.findParent(i) == i) cntC++;
        }


        int ans = cntC -1;

        if(extras >= ans) return ans;
        return -1;





    }
};            
int main(){
    
    return 0;
}