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
class LinkedList{
    public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head = tail = NULL;
        size= 0 ;
    }


    void insertAtEnd(int val){
        Node* temp = new Node(val);
        if(size== 0) head = tail = temp;
        else{
            tail->next  = temp;
            tail = temp ;
        }
        size++;
    }
};
void display(Node* head){
    Node* temp = head;
    while(temp != 0){
    cout<<temp->value<<" ";
    temp = temp->next;
    }
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
    
    display(a);

    return 0;
}