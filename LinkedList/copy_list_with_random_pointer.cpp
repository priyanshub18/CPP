#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* dummy = new Node(0);
        Node* temp = head;
        Node* tempC =dummy;

        while(temp){
            Node* a = new Node(temp->val);
            tempC->next = a;
            temp = temp->next;
            tempC = tempC->next;
        }


        Node* b = dummy->next;
        Node* a = head;

        unordered_map<Node* , Node* > m;
        Node* tempb = dummy->next;
        Node* tempa = head;


        while(tempa != NULL){
            m[tempa] = tempb;
            tempa = tempa->next;
            tempb = tempb->next;
        }


        for(auto x : m){
            Node* o = x.first;
            Node* d = x.second;


            if(o->random != NULL) {
                Node* orandom = o->random;
                Node* drandom = m[o->random];
                d->random = drandom;


            }

        }

        return b;
    }

};            
int main(){
    
    return 0;
}