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
void displayTree(Node* root){
    if(root == NULL) return ;
    cout<<root->val<<" ";

    displayTree(root->left);
    displayTree(root->right);
}

int sumTree(Node* root){
    if(root == NULL) return 0;

    int ans = root->val + sumTree(root->left) + sumTree(root->right);


    return ans;
}

int sizeTree(Node* root){
    if(root == NULL) return 0;

    int ans = 1 + sizeTree(root->left) + sizeTree(root->right);


    return ans;
}
int maxNode(Node* root){
    if(root == NULL) return INT_MIN;

    return max(root->val , max(maxNode(root->left) , maxNode(root->right)));
}
int productTree(Node* root){
    if(root == NULL) return 1;

    int ans = root->val * productTree(root->left) * productTree(root->right);


    return ans;
}
int Level(Node* root){
    if(root == NULL) return 0;

    return  1 + max(Level(root->left) , Level(root->right));
}



int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);



    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    

    displayTree(a);
    cout<<endl;

    cout<<sumTree(a);
    cout<<endl;

    cout<<sizeTree(a)<<endl;

    cout<<maxNode(a)<<endl;

    cout<<productTree(a)<<endl;

    cout<<Level(a);


    return 0;
}