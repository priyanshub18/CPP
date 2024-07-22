#include <bits/stdc++.h>
#include <vector>

using namespace std;
class DisjointSet
{
    vector<int> size, parent;

    DisjointSet(int n)
    {
        size.resize(n, 1);
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

    void UnionBySize(int u, int v)
    {
        u = findParent(u);
        v = findParent(v);

        if (u == v)
            return;

        if (size[u] >= size[v])
        {
            par[v] = u;
            size[u] += size[v];
        }
        else
        {
            par[u] = v;
            size[v] += size[u];
        }
    }
};
int main()
{

    return 0;
}