#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
 class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* tA = list1;
        ListNode* tB = list2;

        ListNode* c = new ListNode(100);
        ListNode* tC = c;
        while(tA != NULL && tB != NULL){
            if(tA->val <= tB->val){
                ListNode* t = new ListNode(tA->val);
                tC->next = t;
                tC = t;
                tA = tA->next;
            }
            else{
                 ListNode* t = new ListNode(tB->val);
                tC->next = t;
                tC = t;
                tB = tB->next;
            }
        }

        if(tA == NULL){
            tC->next = tB;
        }
        else{
            tC->next = tA;
        }


        return c->next;
    }
};            
int main(){
    
    return 0;
}