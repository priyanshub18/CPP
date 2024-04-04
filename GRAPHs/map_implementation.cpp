#include<iostream>
#include<vector>
#include<unordered_map>

                    
using namespace std;
vector<unordered_map<int, int> > graph;
int v ;
void add_edge(int src , int dest , int wt,bool bi_direc = true ){
    graph[src]= {dest , wt};
    if(bi_direc){
        graph[dest] = {src, wt};
    }
}   
void display(){
    for(int i = 0 ; i < graph.size() ; i++){
        cout<<i<<" => " ;
        for(auto el : graph[i] ){
            cout<<"("<<el.first<<" "<<el.second<<") ,";
        }
        cout<<endl;
    }
}           
int main(){
    


    cin>>v;
    graph.resize(v , unordered_map<int, int> > ());
    int e ;
    cin>>e;
    while(e --){
        int s , d , w;
        cin>>s>>d>> w;
        add_edge(s,d, w);
    }

    display();



    return 0;
}