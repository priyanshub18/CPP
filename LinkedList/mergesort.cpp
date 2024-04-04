#include<iostream>
#include<vector>
                    
using namespace std;

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* a = list1;
        ListNode* b = list2;
        ListNode* c = new ListNode(100);
        ListNode* temp = c;

        while(a != NULL && b != NULL){
            if(a->val <= b->val){
                temp->next = a;
                a = a->next;
                temp = temp->next;
            }
            else{
               temp->next = b;
                b = b->next;
                temp = temp->next; 
            }
        }

        if(a == NULL) temp->next = b;
        else temp->next = a;


        return c->next;








    }
    
    
    
    
    
    };                
int main(){
    
    return 0;
}