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
class Deque{
public:
    Node* head;
    Node* tail;
    int size;
    Deque(){
        head = tail = NULL;
        size = 0;

    }

    void push_back(int val){
        Node* temp = new Node(val);
        if(size== 0) head = tail = temp;
        else{
            tail->next  = temp;
            temp ->prev = tail;
            tail = temp ;
        }
        size++;
    }
    void push_front(int val){
        Node* temp = new Node(val);
        if(size== 0) head = tail = temp;
        else{
            temp->next  = head;
            head->prev = temp;
            head = temp ;
        }
        size++;
    }

     void pop_back(){
        if(size ==0){
            cout<<"Deque is empty";
            return ;
        }

        Node* temp = tail->prev;
        temp->next = NULL;
        tail = temp;
        size--;
    }
    void pop_front(){
        if(size ==0){
            cout<<"Deque is empty";
            return ;
        }

        head = head->next;
        size--;
    }

    int front(){
        if(size ==0){
            cout<<"Deque is empty";
            return -1 ;
        }
        return head->val;
    }

    int back(){
        if(size ==0){
            cout<<"Deque is empty";
            return -1 ;
        }
        return tail->val;
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
    Deque q;
    q.push_back(10);
    q.push_back(50);
    q.push_front(70);
    q.push_back(90);
    q.push_front(60);
    q.push_back(50);


    cout<<q.front()<<" ";
    cout<<endl;
    q.pop_front();
    cout<<q.back()<<" "<<endl;

    q.display();
    
   
   




    return 0;
}