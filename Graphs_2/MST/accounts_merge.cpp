#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class DisjointSet {
    vector<int> rank, parent, size ;
public:
    DisjointSet(int n) {
        rank.resize(n + 1, 0);
        parent.resize(n + 1);
        size.resize(n + 1);
        for (int i = 0; i <= n; i++) {
            parent[i] = i;
            size[i] = 1;
        }
    }

    int findUPar(int node) {
        if (node == parent[node])
            return node;
        return parent[node] = findUPar(parent[node]);
    }

    void unionByRank(int u, int v) {
        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);
        if (ulp_u == ulp_v) return;
        if (rank[ulp_u] < rank[ulp_v]) {
            parent[ulp_u] = ulp_v;
        }
        else if (rank[ulp_v] < rank[ulp_u]) {
            parent[ulp_v] = ulp_u;
        }
        else {
            parent[ulp_v] = ulp_u;
            rank[ulp_u]++;
        }
    }

    void unionBySize(int u, int v) {
        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);
        if (ulp_u == ulp_v) return;
        if (size[ulp_u] < size[ulp_v]) {
            parent[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u];
        }
        else {
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }
    }

    int CC(){
        int ans = 0;
        for(int i = 0 ; i < parent.size() ;i++){
            if(findUPar(i) == i)ans++;
        }

        return ans;
    }
};     
class Solution {
public:
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
        int n = accounts.size();
        unordered_map<string , int> mp;

        // unordered_map<int , string> m;
        // for(int i = 0 ; i < n ; i++){
        //     m[i] = accounts[i][0];
        // }


        DisjointSet d(n);
        for(int i = 0 ; i  < n ; i++){

            for(int j = 1 ; j < accounts[i].size() ; j++){
                if(mp.find(accounts[i][j]) != mp.end()){
                    d.unionBySize(i ,mp[accounts[i][j]]);
                }
                else{
                    mp[accounts[i][j]] = i;
                }
            }
        }
        vector<vector<string>> ans(n);

        for(auto it : mp){
            string mail = it.first;
            int node = d.findUPar(it.second);


            ans[node].push_back(mail);
        }

        vector<vector<string>> god;
        for(int i = 0 ; i < n ; i++){
            if(ans[i].size() == 0) continue;


            vector<string> g;
            g.push_back(accounts[i][0]);
            sort(ans[i].begin() , ans[i].end());
            for(auto it : ans[i]){
                g.push_back(it);
            }

            god.push_back(g);
        }

        return god;






    }
};            
int main(){
    
    return 0;
}