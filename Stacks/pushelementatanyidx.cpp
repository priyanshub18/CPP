#include<iostream>
#include<stack>
                    
using namespace std;
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
void pushAtAnyIdx(stack<int>& st , int val , int idx){
    stack<int> temp;
    int count = 0;
    // int  n = st.size();
    while(st.size() > idx ){
        temp.push(st.top());
        st.pop();
        count++;
    }
    st.push(val);
    count = 0;
    while(temp.size() > 0 ){
        st.push(temp.top());
        temp.pop();
        count++;
    }

} 
void display(stack<int> s){
    stack<int> temp ;

    while(s.size() > 0){
        temp.push(s.top());
        s.pop();
    }

    while(temp.size() > 0){
        cout<<temp.top()<<" ";
        s.push(temp.top());
        temp.pop();
    }
    cout<<endl;
}         
int main(){
    stack<int> st;

    st.push(9);
    st.push(3);
    st.push(7);
    st.push(9);
    st.push(1);
    display(st);

    pushAtBottom(st , 5);
    display(st);
    pushAtAnyIdx(st , 8 , 2);
    display(st);

    return 0;
}