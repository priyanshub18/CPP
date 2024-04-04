#include<iostream>
#include<vector>                    
using namespace std;
//LC 133 https://leetcode.com/problems/clone-graph/description/
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};


class Solution {
public:
   vector<Node* > Reg_node;



   void dfs(Node* actual , Node* clone){
        for(auto ne : actual->neighbors){
            if(not Reg_node[ne->val]){
                Node* newNode = new Node(ne->val);
                Reg_node[newNode->val] = newNode;
                clone->neighbors.push_back(newNode);
                dfs(ne , newNode);
            }
            else{
                clone->neighbors.push_back(Reg_node[ne->val]);
            }
        }
   }
    Node* cloneGraph(Node* node) {
        if(node == NULL) return NULL;


        Node* clone = new Node(node->val);
        Reg_node.resize(110 ,NULL);//resize to the maximum number of nodes that can come 
        Reg_node[clone->val] =  clone;

        dfs(node , clone);
        return clone ;

    }
};                       
int main(){
    
    return 0;
}