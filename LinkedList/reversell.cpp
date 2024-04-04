#include<iostream>
#include<vector>
                    
using namespace std;
class ListNode{
    public:
    int val;
    ListNode* next;
    ListNode(int n ){
        this->val  = n;
    }
};
ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* agla = NULL;
        while(curr){
            agla = curr->next;
            curr->next = prev;
            prev = curr;
            curr = agla;
        }
        return prev;
}     
int main(){
    
    return 0;
}