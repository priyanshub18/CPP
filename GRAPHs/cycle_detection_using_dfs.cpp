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


bool dfs(int src , int parent , unordered_set<int>& vis){
    vis.insert(src);
    for(auto neig : graph[src]){
        if(! vis.count(neig) and neig != parent){
            return true;
        }
        if(! vis.count(neig)){
            bool b = dfs(neig , src , vis);
            if(b== true) return true;

        }

    }
    return false;
}



bool has_cycle(){
        unordered_set<int> vis ;
        bool res = false;
        for(int i = 0 ; i < v ;i++){
            if(!vis.count(i)){
                res = dfs(i, -1 , vis);
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

    display();



    return 0;
}