#include<iostream>
#include<stack>
using namespace std;

void display(stack<int>& st){
    if(st.size() == 0) return ;
    int temp = st.top();
    st.pop();

    display(st);
    cout<<temp<<" ";
    st.push(temp);

} 
void revdisplay(stack<int>& st){
    if(st.size() == 0) return ;
    int temp = st.top();
    cout<<temp<<" ";
    st.pop();

    revdisplay(st);
    
    st.push(temp);

}
void pushAtBottom(stack<int>& st , int val){
    stack<int> temp;

    while(st.size() > 0 ){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);

    while(temp.size() > 0){
        st.push(temp.top());
        temp.pop();
    }

} 
void reverseStack(stack<int>& st){
    if(st.size()== 1) return ;
    int x  = st.top();
    st.pop();
    reverseStack(st);
    pushAtBottom(st, x);
}

                        
int main(){
    stack<int> st;
    st.push(9);
    st.push(3);
    st.push(7);
    st.push(9);
    st.push(1);
    display(st);
    cout<<endl;
    reverseStack(st);
    display(st);
    

    return 0;
}