#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution {
public:
    bool check(int src , vector<vector<int>>& graph, vector<int>& vis ,vector<int>& color){
        int col = 1;
        queue<pair<int , int > > q;
        q.push({src , col});
        vis[src];


        while(not q.empty()){
            int node = q.front().first;
            int col = q.front().second;
            
            if(color[node] == -1) color[node] = col;
            else{
                if(color[node] != col) return false;
            }
            q.pop();

            for(int el : graph[node]){
                if(vis[el] != 2){
                    vis[el]++;
                    q.push({el , 1-col});
                }
            }
        }

        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> vis(n) ;
        vector<int> color(n, -1);
        
        for(int i = 0 ; i < n ; i++){
            if(color[i] == -1){
            if(check(i ,graph , vis , color) == false)return false;
            }
        }

        return true;
    }
};            
int main(){
    
    return 0;
}