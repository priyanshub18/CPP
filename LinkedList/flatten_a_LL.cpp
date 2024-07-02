#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
Node* merge(Node* l1 , Node* l2){
    Node* dummy = new Node(-1);
    Node* res = dummy;
    
    while(l1 and l2){
        if(l1->data < l2->data){
            res->bottom = l1;
            res = l1;
            l1 = l1->bottom;
        }else{
            res->bottom = l2;
            res = l2;
            l2 = l2->bottom;
        }
        res->next = NULL;
       
        
    }
     if(l1) res->bottom = l1;
        else res->bottom = l2;
        
        
        if(dummy->bottom) dummy->bottom->next = NULL;
        return dummy->bottom;
}
Node *flatten(Node *head) {
    if(head == NULL or head->next == NULL) return head;
    
    Node* merged = flatten(head->next);
    return merge(head , merged );
}            
int main(){
    
    return 0;
}