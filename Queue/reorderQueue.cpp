#include<iostream>
#include<queue>
#include<stack>
                    
using namespace std;
void display(queue<int> q){
    int n = q.size();

    for(int i = 1 ; i<= n ; i++){
        q.push(q.front());
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}  
void reorder(queue<int>& q){
    stack<int> st;

    int n  = q.size();
    //move first half from queue to stack
    for(int i = 1 ; i <= n /2 ;i++){
        st.push(q.front());
        q.pop();

    }
    //move the ele from stack to queue again 
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }

    //move the rest of the elememts to stacks
    for(int i = 1 ; i <= n /2 ;i++){
        st.push(q.front());
        q.pop();

    }

    //now use the alternate approach to find the required solution
    //this step is called interleaving 
    

    while(st.size()> 0){
        q.push(st.top());
        q.push(q.front());
        q.pop();
        st.pop();

    }
    //reverse the queue to get the favourable outcome
    for(int i = 1 ; i <= n ;i++){
        st.push(q.front());
        q.pop();

    }
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }






}                      
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    q.push(9);
    q.push(10);



    display(q);
    reorder(q);
    display(q);

    return 0;
}