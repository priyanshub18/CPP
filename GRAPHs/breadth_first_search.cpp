#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
#include<queue>

                    
using namespace std;
vector<list<int> > graph;
unordered_set<int> visited;
int v ;
void add_edge(int src , int dest , bool bi_direc = true ){
    graph[src].push_back(dest);
    if(bi_direc){
        graph[dest].push_back(src);
    }
}         

void bfs(int src , int dest , vector<int> &dist){
    queue<int> qu;
    visited.clear();
    dist.resize(v , INT_MAX);
    dist[src] = 0;
    visited.insert(src);
    qu.push(src);

    while(not qu.empty()){
        int curr = qu.front();
        qu.pop();
        for(auto neighbour : graph[curr]){
            if( not visited.count(neighbour)){
                qu.push(neighbour);
                visited.insert(neighbour);
                dist[neighbour] = dist[curr] + 1 ;
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

    vector<int > distance;

    bfs(0, 6 , distance);

    for(int ele : distance){
        cout<<ele<<" ";
    }

    return 0;
}