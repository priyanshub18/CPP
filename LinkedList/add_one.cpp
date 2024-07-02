#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution
{
    public:
    int carry = 1;
    void add(Node* head){
        if(head ==NULL) return;
            
        add(head->next);   
        int val = (head->data) + carry;
        head->data = val % 10;
        carry = val / 10;
     
        return;
        
        
    }
    
    Node* addOne(Node *head) 
    {
        add(head);
        
        if(carry != 0){
            Node* dummy = new Node(carry);
            dummy ->next = head;
            return dummy;
        }
        
        return head;
        
    }
};            
int main(){
    
    return 0;
}