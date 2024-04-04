#include<iostream>
#include<queue>
#include<stack>
                    
using namespace std;
void reverseAQueue(queue<int>& q){
    stack<int> st;
    int n = q.size();

    for(int i = 0 ; i<= n ; i++){
        st.push(q.front());
        q.pop();
    }

    while(st.size() >  0 ){
        q.push(st.top());
        st.pop();
    }


   // cout<<endl;
}   
void display(queue<int> q){
    int n = q.size();

    for(int i = 1 ; i<= n ; i++){
        q.push(q.front());
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}    

int main(){
    queue<int> q;
    q.push(10);
    q.push(50);
    q.push(70);
    q.push(90);
    q.push(60);
    q.push(50);


    // cout<<q.front()<<" ";
    // q.pop();
    // cout<<q.front()<<" ";
    display(q); 
    reverseAQueue(q);
    display(q);
    return 0;
}