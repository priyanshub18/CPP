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
    void insertAtBegin(int val){
        Node* temp = new Node(val);
        if(size== 0) head = tail = temp;
        else{
            temp->next  = head;
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
            ptr->next = t;
           

        }

           
        
       
        size++;
        return;
    }
    int getElement(int idx){
        if(idx < 0 || idx >= size) cout<<"invalid_argument";
        else if(idx == 0) return head->value;
        else if(idx == size -1) return tail->value;


        else{
            Node* ptr = head;
            for (int i = 0; i < idx; i++)
            {
               ptr = ptr->next;
            }


            return ptr->value;
        }

        return -1;
    }

    void deleteAtHead(){
        if(size == 0){
            cout<<"list is empty";
        }
        else if( size == 1){
            head = NULL;
            tail = NULL;
            size--;
        }
        else{
            head = head->next;
            size--;
        }
    }

    void deleteAtTail(){
        if(size ==0){
            cout<<"List is empty";
            return ;
        }

        Node* temp = head;
        while(temp->next == tail){
            temp = temp->next;
        }

        temp->next = NULL;
        tail = temp;
        size--;
    }

    void deleteAtIdx(int idx){
        if(idx < 0 || idx >= size) cout<<"Invalid thing ";
        else if(idx == 0 ) deleteAtHead();
        else if(idx == size - 1 ) deleteAtTail();

        else{
            Node* temp = head;
            for(int i = 1 ; i < idx ; i++){
                temp  = temp-> next ;
            }
        

        temp->next = temp->next->next;
        }
        size--;

    }


    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->value<<" ";
            temp = temp-> next;

        }
        cout<<endl;
    }
};





int main(){
    LinkedList ll;

    ll.insertAtEnd(10);
    ll.insertAtEnd(20);//{10,20}
    ll.insertAtEnd(10);
    ll.display();
    ll.insertAtIdx(11 , 2);
    ll.insertAtIdx(18 , 3);

    ll.display();
    //cout<<ll.getElement(2);
    ll.deleteAtHead();
    ll.display();
    ll.deleteAtIdx(2);

    ll.display();
    return 0;
}