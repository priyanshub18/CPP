#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>

                    
using namespace std;
vector<list<int> > graph;
int v ;
void add_edge(int src , int dest , bool bi_direc = true ){
    graph[src].push_back(dest);
    if(bi_direc){
        graph[dest].push_back(src);
    }
} 

int dfs(int node , unordered_set<int> &visited){
    visited.insert(node);

    for(auto ne : graph[node]){
        if(not visited.count(ne)){
            dfs(ne , visited);
        }
    }
}


int connected_component(){
    int result = 0;
    unordered_set<int> visited;
    for(int i = 0 ;i < v ; i++){
        //i have to go to every vertex
        //if we can intiate dfs from that vertext then that is a connected component

        if(visited.count(i) == 0){
            result++;
            dfs(i , visited);

        }

    }
    return result;
}
int main(){
    


    cin>>v;
    graph.resize(v , list<int> ());
    int e ;
    cin>>e;
    while(e --){
        int s , d;
        cin>>s>>d;
        add_edge(s,d);
    }



    cout<<connected_component()<<"\n";

    return 0;
}