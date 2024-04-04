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
void HorizontalLevel(Node* root, int& minLevel ,int& maxLevel ,int level){
    if(root == NULL) return ;
    minLevel = min(minLevel , level);
    maxLevel = max(maxLevel , level);

    HorizontalLevel(root->left,minLevel ,maxLevel, level-1);
    HorizontalLevel(root->right,minLevel,maxLevel,level+1);
}

void Topview(vector<int>& top , Node* root , int level ){
    if(root == NULL) return ;
    if(top[level] == INT_MIN) top[level] = root->val;

    Topview(top , root->left , level-1);
    Topview(top , root->right , level+1);
    
}

int main(){
    int arr[] = {1,2,3,4,5 , INT_MIN , 6 ,INT_MIN ,9,INT_MIN,INT_MIN,7 ,INT_MIN,INT_MIN,INT_MIN,8};
    int n = sizeof(arr)/4;
    Node* root = construct(arr , n);
    
    int minLevel = 0;
    int maxLevel = 0;
    HorizontalLevel(root , minLevel ,maxLevel, 0);

    
    int levels = maxLevel - minLevel +1 ;

    vector<int> top(levels, INT_MIN);
    Topview(top , root , -minLevel);



    for(int i = 0 ; i < top.size() ; i++){
        cout<<top[i]<<" ";
    }


    return 0;
}