#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        //topological sorting is there also 
        //i have to think about this in class

        //this is the base case;
         if(edges.size() == 0) {
            vector<int> tmp;
            tmp.push_back(0);
            return tmp;
        }

        //i have to create a graph now 
        //this should be a map as i am supposed to remove some elemets;

        unordered_map<int , list<int> > graph;
        for(auto ele : edges){
            graph[ele[0]].push_back(ele[1]);
            graph[ele[1]].push_back(ele[0]);
        }

        //now as the algo is to remove the node leaves so i have to find the node leaves first

        vector<int> leaves;

        for(auto ele : graph){
            if(ele.second.size() == 1){
                leaves.push_back(ele.first);
            }
        }

        //since the hint says us that almost there can only be two nodes as the answer

        while(n > 2){
            vector<int> ans;

            n -= leaves.size();
            for(auto l : leaves){
                int n = graph[l].front();
                graph[n].remove(l);
                //most important part of the code sir
                if(graph[n].size() == 1){
                    ans.push_back(n);
                }
            }
        leaves = ans;

        }
        return leaves ;
        
    }
};                      
int main(){
    
    return 0;
}