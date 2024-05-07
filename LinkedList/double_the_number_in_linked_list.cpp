#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
//https://leetcode.com/problems/double-a-number-represented-as-a-linked-list/?envType=daily-question&envId=2024-05-07


//this is the best code i have thought by myself 



 //* Definition for singly-linked list.
    struct ListNode {
        int val;
        ListNode *next;
        ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
        ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    int f(ListNode* temp){
        if(temp->next == NULL){
            int doub = temp->val * 2 ;
            int carry = doub / 10;
            temp->val = doub % 10;
            return carry;
    }
        int carry = f(temp->next);
        int doub = temp->val * 2;
        temp->val = ((doub) + carry);
        carry = temp->val / 10;
        temp->val %= 10;
        return carry;
}
   
    ListNode* doubleIt(ListNode* head) {
        int carr = f(head);
        if (carr == 0) return head;
        ListNode* t = new ListNode(carr);
        t->next = head;
        return t; 
    }
};                     
int main(){
    
    return 0;
}