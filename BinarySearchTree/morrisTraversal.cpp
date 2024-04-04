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


void MorrisTraversal(Node* curr ){
    
    while(curr){
        if(curr->left){
            //find the predecessor
            Node* pred = curr->left;
            while(pred->right != NULL && pred->right != curr){
                pred = pred->right;
            }
            if(pred->right == NULL){
                pred->right = curr;
                curr = curr ->left;
            }

            if(pred->right == curr){
                pred->right = NULL;
                 cout<<curr->val<<" ";
                curr = curr->right;

            }

        }


        else{
            //visit
            cout<<curr->val<<" ";
            curr = curr->right;
        }
    }
}
    

int main(){
    int arr[] = {10,5,15,3,8 , INT_MIN , 20 ,INT_MIN ,INT_MIN, 6,18,INT_MIN};
    int n = sizeof(arr)/4;
    Node* root = construct(arr , n);
    

    MorrisTraversal(root);
    


    
    
    return 0;
}  