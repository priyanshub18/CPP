#include<iostream>
#include<vector>

                    
using namespace std;   


class Queue{
public:
    int f ; 
    int b ;
    int s ;
    vector<int> arr;

    Queue(int val){
        f = 0 ; b = 0; s = 0;

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
        s++;
    }
    void pop(){
        if(s == 0) {
            cout<<"Queue is empty";
            return;
        }
        f++;
        s--;
    }

    int front(){
         if(s == 0) {
            cout<<"Queue is empty";
            return -1;
        }
        return arr[f];
    }
    int back(){
         if(s == 0) {
            cout<<"Queue is empty";
            return -1;
        }
        return arr[b-1];
    }

    int size(){
        return s;
    }
    bool empty(){
        if(s == 0) return true;
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