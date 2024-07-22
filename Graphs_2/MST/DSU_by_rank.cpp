#include <bits/stdc++.h>
#include <vector>

using namespace std;
class DisjointSet
{
    vector<int> rank, parent;

    DisjointSet(int n)
    {
        rank.resize(n, 0);
        parent.resize(n, 0);
        for (int i = 0; i < n; i++)
            parent[i] = i;
    }

    int findParent(int node)
    {
        if (node == parent[node])
            return node;
        return parent[node] = findParent(parent[node]); // fucking path compression
    }

    void UnionByRank(int  u , int v){
        u = findParent(u);
        v = findParent(v);

        if(u == v) return;

        if(rank[u] > rank[v]){
            par[v] = u;
        }
        else if(rank[u] < rank[v]){
            par[u] = v;
        }
        else{
            par[u] = v;
            rank[v]++;//only where the rank grows
        }
    }

};
int main()
{

    return 0;
}