#include<iostream>
#include<vector>
                    
using namespace std;

class Node{
public:
    int val;
    Node* next;
    Node* prev;

    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;

    }
};
class doublyLL{
public:
    Node* head;
    Node* tail;
    int size;
    doublyLL(){
        head = tail = NULL;
        size = 0;

    }

    void insertAtEnd(int val){
        Node* temp = new Node(val);
        if(size== 0) head = tail = temp;
        else{
            tail->next  = temp;
            temp ->prev = tail;
            tail = temp ;
        }
        size++;
    }
    void insertAtBegin(int val){
        Node* temp = new Node(val);
        if(size== 0) head = tail = temp;
        else{
            temp->next  = head;
            head->prev = temp;
            head = temp ;
        }
        size++;
    }

    void insertAtIdx(int val, int idx){
        //Node* temp = new Node(val);
        if( idx < 0 || idx > size) cout<<"Invalid thing";
        else if( idx == 0) insertAtBegin(val);
        else if( idx == size) insertAtEnd(val);
        else{
            Node* t = new Node(val);
            Node* ptr = head;

            for(int i = 1 ;  i  < idx ; i ++){
                 ptr  = ptr->next ;
            }

            t->next = ptr->next;
            t->prev = ptr;
            t->next->prev = t;
            ptr->next = t;
        }



        }

        void deleteAtTail(){
        if(size ==0){
            cout<<"List is empty";
            return ;
        }

        Node* temp = tail->prev;
        temp->next = NULL;
        tail = temp;
        size--;
    }


    //     void deleteAtIdx(int idx){
    //     if(idx < 0 || idx >= size) cout<<"Invalid thing ";
    //     else if(idx == 0 ) deleteAtHead();
    //     else if(idx == size - 1 ) deleteAtTail();

    //     else{
    //         Node* temp = head;
    //         for(int i = 1 ; i < idx ; i++){
    //             temp  = temp-> next ;
    //         }
    //     temp->next = temp->next->next;
    //     temp->next->prev = temp;
    //     }
    //     size--;

    // }

        int getElement(int idx){
        if(idx < 0 || idx >= size) cout<<"invalid_argument";
        else if(idx == 0) return head->val;
        else if(idx == size -1) return tail->val;


        else{
            Node* ptr = head;
            for (int i = 0; i < idx; i++)
            {
               ptr = ptr->next;
            }


            return ptr->val;
        }

        return -1;
    }
        void display(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->val<<" ";
            temp = temp-> next;

        }
        cout<<endl;
    }
};

                        
int main(){
    
    doublyLL list ;
    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.display();
    list.insertAtEnd(30);
    list.insertAtEnd(40);
    list.display();
    cout<< list.getElement(1);




   




    return 0;
}