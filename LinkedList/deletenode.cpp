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
void display(Node* head){
    Node* temp = head;
    while(temp != 0){
    cout<<temp->value<<" ";
    temp = temp->next;
    }
}
void deletenode(Node* head , Node* tar){
    Node* temp = head;
    while(temp->next != tar){
        temp = temp->next;
    }
    temp->next = temp->next->next;
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
    deletenode(a,c);
    display(a);

    return 0;
}