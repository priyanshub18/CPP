#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution {
public:
    ListNode* reverseList(ListNode * head) {

            if (head == NULL || head->next == NULL)
                return head;
            ListNode* newhead = reverseList(head->next);
            head->next->next = head;
            head->next = NULL;

            return newhead;
        }
    ListNode* findNode(ListNode* temp, int k) {
        k -= 1;
        while (temp and k) {
            k--;
            temp = temp->next;
        }
        return temp;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *temp = head, *prev = NULL, *next = NULL;

        while (temp) {
            ListNode* kthNode = findNode(temp, k);
            if (not kthNode) {
                if (prev)
                    prev->next = temp;
                break;
                // case of not having enough k sets
            }
            next = kthNode->next;
            kthNode->next = NULL;

            reverseList(temp);
            if (temp == head) {
                head = kthNode;
            } else {
                prev->next = kthNode;
            }
            prev = temp;
            temp = next;
        }
        return head;
    }
};        
int main(){
    
    return 0;
}