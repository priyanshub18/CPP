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

vector<vector<int> > ans;
void dfs(int curr , int end , vector<int> &path  ){
    if(curr == end) {
        path.push_back(curr);
        ans.push_back(path);
        path.pop_back();
        return;
    }
    visited.insert(curr); // mark the current is visited;
    path.push_back(curr);
    for(auto neighbour : graph[curr]){
        if(not visited.count(neighbour)){
            dfs(neighbour , end , path);
        
        }
    }
    path.pop_back();
    visited.erase(curr);

    return ;

}

void all_path(int start , int end){
    vector<int> v ;
    dfs(start , end , v);
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
    // cout<<any_path(0,6);
    all_path(0,6);
    for(auto ele : ans){
        for(auto el : ele){
            cout<<el<<" ";
        }
        cout<<endl;
    }
}

