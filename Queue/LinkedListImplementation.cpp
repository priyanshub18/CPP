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

class Queue{
    public:
    Node* head;
    Node* tail;
    int size;
    Queue(){
        head = tail = NULL;
        size= 0 ;
    }


    void push(int val){
        Node* temp = new Node(val);
        if(size== 0) head = tail = temp;
        else{
            tail->next  = temp;
            tail = temp ;
        }
        size++;
    }

    void pop(){
        if(size == 0){
            cout<<"Queue is empty";
        }
        else if( size == 1){
            head = NULL;
            tail = NULL;
            size--;
        }
        else{
            Node* temp =head;
            head = head->next;

            size--;
            delete(temp);
        }
    }

    int front(){
        if(size == 0){
            cout<<"Queue is empty";
            return -1;
        }
        return head->value;
    }
    int back(){
        if(size == 0){
            cout<<"Queue is empty";
            return -1;
        }
        return tail->value;
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
    Queue q;
    q.push(10);
    q.push(50);
    q.push(70);
    q.push(90);
    q.push(60);
    q.push(50);


    cout<<q.front()<<" ";
    cout<<endl;
    q.pop();
    cout<<q.front()<<" ";
    cout<<endl;



    q.display();

   
    return 0;
}