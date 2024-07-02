#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummyNode = new ListNode(0);
        ListNode* curr = dummyNode;
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        int carry = 0;
        while(temp1 != NULL || temp2 != NULL) {
            int sum = carry;
            if(temp1) {
                sum += temp1->val;
                temp1 = temp1->next;
            }
            if(temp2) {
                sum += temp2->val;
                temp2 = temp2->next;
            }
            ListNode* newNode = new ListNode(sum % 10);
            carry = sum / 10;
            curr->next = newNode;
            curr = curr->next;
        }
        if(carry) {
            ListNode* newNode = new ListNode(carry);
            curr->next = newNode;
        }
        return dummyNode->next;
    }
};            
int main(){
    
    return 0;
}