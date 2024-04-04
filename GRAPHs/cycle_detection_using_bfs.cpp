#include <bits/stdc++.h>
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
void display(){
    for(int i = 0 ; i < graph.size() ; i++){
        cout<<i<<" => " ;
        for(auto el : graph[i] ){
            cout<<el<<" , ";
        }
        cout<<endl;
    }
}  


bool bfs(int src){
    unordered_set<int > vis;
    queue<int> qu;

    vector<int> par (v  , -1 );
    qu.push(src);
    vis.insert(src);


    while(not qu.empty()){
        int curr = qu.front();
        qu.pop();
        for(auto neig : graph[curr]){
            if(vis.count(neig) and par[curr] != neig) return true;
            if(!vis.count(neig)){
                vis.insert(neig);
                par[neig] = curr;
                qu.push(neig);
            }

            
        }
    }
}



bool has_cycle(){
        unordered_set<int> vis ;
        bool res = false;
        for(int i = 0 ; i < v ;i++){
            if(!vis.count(i)){
                res = bfs(i);
                if(res == true) return true;
            }
        }
        return false;
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

    cout<<has_cycle();



    return 0;
}