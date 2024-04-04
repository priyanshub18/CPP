#include<iostream>
#include<vector>
                    
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;

    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }  


}; 
void nThlevel(Node* root , int level , int k){
    if(root == NULL) return ;
    if(level == k) cout<<root->val<<" ";

    nThlevel(root->left, level+1, k);
    nThlevel(root->right, level+1 , k);
}                    
int main(){
    Node* a = new Node(1);
    Node* b = new Node(7);
    Node* c = new Node(9);
    Node* d = new Node(2);
    Node* e = new Node(6);
    Node* f = new Node(9);
    Node* g = new Node(5);
    Node* h = new Node(11);
    Node* i = new Node(5);



    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    e->left = i;
    e->right = h;
    c->right = f;
    f->left = g;
   


    nThlevel(a , 1 , 1);
    
    return 0;
}