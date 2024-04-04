#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
#include<queue>


                    
using namespace std;
vector<list<int> > graph;
int v ;
void add_edge(int src , int dest , bool bi_direc = false ){
    graph[src].push_back(dest);
    if(bi_direc){
        graph[dest].push_back(src);
    }
}     

void topobfs(){
    vector<int> indegree(v,0);

    for(int i = 0 ; i < v ; i++){
        for(auto neigh : graph[i]){
           // i ----> neigh
            indegree[neigh]++;
        }
    }
    queue<int> qu;
    unordered_set<int> vis;
    for(int i = 0 ; i < v ; i++){
        if(indegree[i] == 0) {
            qu.push(i);
            vis.insert(i);
        }
    }


    while(not qu.empty()){
        int node = qu.front();
        cout<<node<<" ";
        qu.pop();

        for(auto neigh : graph[node]){
            if(not vis.count(neigh)){
                indegree[neigh]--;
                if(indegree[neigh] == 0){
                    qu.push(neigh);
                    vis.insert(neigh);
                }
            }
        }
    }
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
    topobfs();


    return 0;
}