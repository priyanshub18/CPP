#include<iostream>
#include<vector>

                    
using namespace std;   


class Queue{
public:
    int f ; 
    int b ;
    vector<int> arr;

    Queue(int val){
        f = 0 ; b = 0;
        vector<int> v(val);
        arr = v;

    }

    void push(int val){
        if(b == 5) {
            cout<<"queue is full";
            return ;
        }
        arr[b] = val;
        b++; 
    }
    void pop(){
        if(b-f == 0) {
            cout<<"Queue is empty";
            return;
        }
        f++;
    }

    int front(){
         if(b-f == 0) {
            cout<<"Queue is empty";
            return -1;
        }
        return arr[f];
    }
    int back(){
         if(b-f == 0) {
            cout<<"Queue is empty";
            return -1;
        }
        return arr[b-1];
    }

    int size(){
        return b-f;
    }
    bool empty(){
        if(b-f == 0) return true;
        return false;
    }

    void display(){
        for (int  i = f; i < b ; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        
    }
};
int main(){
    Queue q(5);
    q.push(10);
    q.push(50);
    q.push(70);
    q.push(90);
    q.push(60);
   


    //cout<<q.front()<<" ";//
    //q.pop();
    //cout<<q.front()<<" ";
    q.display();
    return 0;
}