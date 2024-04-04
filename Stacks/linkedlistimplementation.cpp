#include<iostream>
#include<vector>
                    
using namespace std;
class Node{
    public:
    int val;
    Node* next;

    Node(int val){
        this-> val =  val;
        next  = NULL;

    }
};    


class Stack{
    public:
    Node* head;
    int size;
    Stack(){
        head = NULL;
        size = 0;
    }


    void push(int val){
        Node* temp = new Node(val);
        temp->next = head;
        head = temp;
        size++;
    }

    void pop(){
        if(size == 0 ) cout<<"invalid";
        head = head ->next;
    }

    int top(){
        size--;
        return head->val;
    }
    void print(Node* temp){
        if(temp == NULL ) return ;
        print(temp->next);
        cout<<temp->val<<" ";

    }
    void display(){
        Node* temp = head;
        print(temp);
        cout<<endl;
    }

};
int main(){
    Stack st ;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);
    st.display();
    st.pop();
    // cout<<endl;
    cout<<st.top();
    cout<<endl;

    st.display();


    
    return 0;
}