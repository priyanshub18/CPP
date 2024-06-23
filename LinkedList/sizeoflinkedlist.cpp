#include<iostream>
#include<vector>
                    
using namespace std;
class Node{
public:
    int value;
    Node* next;


    Node(int value){
        this->value = value;
        this->next = NULL;
    }
};  

int countnodes(Node* head){
    int count = 0;
    Node* temp = head;
    while(temp != NULL){
    //cout<<temp->value<<" ";
    count++;
    cout<<temp->value<<" ";
    temp = temp->next;
   
    
    }
    return count;
}
int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = NULL;

    //FIND THE VALUE NOW

    // Node* temp =  a;

    // while (temp!= NULL)
    // {
    //     cout<<temp->value<<" ";
    //     temp = temp->next;

    // }
    
    cout<<countnodes(a);

    return 0;
}