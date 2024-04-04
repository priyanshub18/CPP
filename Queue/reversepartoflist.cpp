#include<iostream>
#include<stack>
#include<queue>

                    
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
void reverseK(int k , queue<int>& q){
    stack<int> st;
    for (int i = 1; i <= k ; i++)
    {
       st.push(q.front());
       q.pop();
    }
    while(st.size() > 0){
        q.push(st.top());
        st.pop();
    }

    int n = q.size();
    for(int i = 1 ; i <= n-k ; i++){
        q.push(q.front());
        q.pop();
    }
    
}                      
int main(){
    queue<int> q;
    q.push(10);
    q.push(50);
    q.push(70);
    q.push(90);
    q.push(60);
    q.push(50);  display(q);

    reverseK(3 , q);
    display(q);

    return 0;
}