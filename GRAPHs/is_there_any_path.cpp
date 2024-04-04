#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>

                    
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
void display(){
    for(int i = 0 ; i < graph.size() ; i++){
        cout<<i<<" => " ;
        for(auto el : graph[i] ){
            cout<<el<<" , ";
        }
        cout<<endl;
    }
}   
bool dfs(int curr , int end  ){
    if(curr == end) return true;
    visited.insert(curr); // mark the current is visited;
    for(auto neighbour : graph[curr]){
        if(! visited.count(neighbour)){
            bool res = dfs(neighbour , end);
            if(res) return true;
        }
    }

    return false;

}

bool any_path(int start , int end){
    return dfs(start , end);
}

void graph_input(){
    


    cin>>v;
    graph.resize(v , list<int> ());
    int e ;
    cin>>e;
    while(e --){
        int s , d;
        cin>>s>>d;
        add_edge(s,d);
    }

   // display();


}



int main(){

    graph_input();
    cout<<any_path(0,6);
}

