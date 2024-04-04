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
int Level(Node* root){
    if(root == NULL) return 0;

    return  1 + max(Level(root->left) , Level(root->right));
}
void nThlevel(Node* root , int level , int k){
    if(root == NULL) return ;
    if(level == k) {
        cout<<root->val<<" ";
        return;
    }

   

    nThlevel(root->left, level+1, k);
    nThlevel(root->right, level+1 , k);
}       
void nThlevelRTL(Node* root , int level , int k){
    if(root == NULL) return ;
    if(level == k) {
        cout<<root->val<<" ";
        return;
    }

   

   
    nThlevel(root->right, level+1 , k);
    nThlevel(root->left, level+1, k);
}       


void levelOrderTraversal(Node* root){
    for (int  i =  1 ; i <= Level(root); i++)
    {
        nThlevel(root,1 , i);
        cout<<endl;
    }
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
    


    levelOrderTraversal(a);


    
    
    return 0;
}