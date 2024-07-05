#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
int findCeil(Node* root, int input) {
    if (root == NULL) return -1;
    Node* prev = NULL;
    while(root and root->data != input){
        
        if(root->data > input){
            prev = root;
            root = root->left;
            
        }
        else{
            root = root->right;
        }
    }
    if(prev == NULL and root == NULL) return -1;
    return (root and root->data == input) ? input : prev->data;
    
}            
int main(){
    
    return 0;
}