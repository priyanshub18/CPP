#include<iostream>
#include<queue>
                    
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
Node* construct(int arr[] , int n){
        queue<Node*> q;
        Node* root = new Node(arr[0]);
        q.push(root);
        int i  = 1 ;
        int j = 2;

        while(q.size() > 0 && i < n){
            Node* temp = q.front();
            q.pop();
            Node* l ;
            Node* r;
            if(arr[i] != INT_MIN) l = new Node(arr[i]);
            else  l = NULL;
            if(j != n && arr[j] != INT_MIN) r = new Node(arr[j]);
            else  r = NULL;


            temp->left  = l;
            temp->right = r;


            if(l) q.push(l);
            if(r) q.push(r);


            i+= 2;
            j+=2;

        }

        return root;
}
    

void levelOrderQueue(Node* root){
    queue<Node*> q;
    q.push(root);

    while(q.size() > 0 ){
        Node* temp = q.front();
        q.pop();
        cout<<temp->val<<" ";

        if(temp->left) q.push(temp->left);
        if(temp->right) q.push(temp->right);


    }


}


void leftboundaryTraversal(Node* root){
    if(root == NULL) return ;
    if(root->left== NULL  && root->right == NULL) return;

    cout<<root->val<<" ";
    leftboundaryTraversal(root->left);
    if(!root->left) leftboundaryTraversal(root->right);
}
void leafnodetraversal(Node* root){
    if(root == NULL) return ;
    if(root->left== NULL  && root->right == NULL) cout<<root->val<<" ";

    leafnodetraversal(root->left);
    leafnodetraversal(root->right);
}
void rightboundaryTraversal(Node* root){
    
    if(root == NULL) return ;
    if(root->left== NULL  && root->right == NULL) return;
   
   
    rightboundaryTraversal(root->right);
    if(!root->right) leftboundaryTraversal(root->left);

    //since muhje reverse main chiaye 
    cout<<root->val<<" ";
}
int main(){
    int arr[] = {1,2,3,4,5 , INT_MIN , 6 ,INT_MIN ,INT_MIN, 7,8,9};
    int n = sizeof(arr)/4;
    Node* root = construct(arr , n);
    

    leftboundaryTraversal(root);
    leafnodetraversal(root);
    rightboundaryTraversal(root->right);
    
    


    
    
    return 0;
}