#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution
{
    public:
   
    Node* reverseDLL(Node * head)
    {
        if(head == NULL or head->next == NULL) return head;
        
        Node* prev = NULL , *curr = head;
        
        while(curr){
            prev = curr->prev;
            curr->prev = curr->next;
            curr->next = prev;
            
            curr = curr->prev;
            
        }
        return prev->prev;
        
       
    }
};            
int main(){
    
    return 0;
}