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
int main(){
    Node a(10),b(20),c(30),d(40);
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = NULL;


    // cout<<a.value<<" ";
    // cout<<a.next->value<<" ";
    // cout<<a.next->next->value<<" ";
    // cout<<a.next->next->next->value<<" ";


    Node temp = a;

    while(1){
        cout<<temp.value<<" ";
        if(temp.next == NULL) break;
        temp = *(temp.next);
    }
    


    return 0;
}