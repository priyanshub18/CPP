#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL or head->next == NULL) return head;
        ListNode* oddhead = head , *oddtemp =  head , *eventemp = head->next , *evenhead = head->next;

        ListNode* temp = head;

        while(oddtemp->next and eventemp->next){
            oddtemp->next = eventemp->next;
            oddtemp = oddtemp->next;

            eventemp->next = oddtemp->next;
            eventemp = eventemp->next;

        }
        oddtemp->next = evenhead;
        return oddhead;
       
    }
};            
int main(){
    
    return 0;
}