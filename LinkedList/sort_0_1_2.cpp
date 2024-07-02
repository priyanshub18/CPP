#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution
{
    public:
    Node* segregate(Node *head) {
        if(not head ) return head;
        Node* zerohead = new Node(-1);
        Node* onehead = new Node(-1);
        Node* twohead = new Node(-1);
        Node* temp = head;
        Node* zerotemp = zerohead;
        Node* onetemp = onehead;
        Node* twotemp = twohead;
        while(temp){
            if(temp->data== 0){
                zerotemp ->next = temp;
                zerotemp = temp;
            }
            else if(temp->data== 1){
                onetemp ->next = temp;
                onetemp = temp;
            }
            else if(temp->data== 2){
                twotemp ->next = temp;
                twotemp = temp;
            }
            
            temp = temp->next;
        }
        zerotemp->next = (onehead->next) ? onehead->next : twohead->next;
        onetemp->next = twohead->next;
        twotemp->next = NULL;
        return zerohead->next;
        
    }
};            
int main(){
    
    return 0;
}