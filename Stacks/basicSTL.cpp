#include<iostream>
#include<stack>
                    
using namespace std;
                        
int main(){
    stack<int> st;
    st.push(3);
    st.push(2);
    st.push(4);
    st.push(6);
    
   stack<int> temp;


    while (st.size() > 0 )
    {
        cout<<st.top()<<" ";
        int x = st.top();
        st.pop();
        temp.push(x);

    }
    cout<<endl;
    while (temp.size() >0 )
    {
        int y = temp.top();
        cout<<y<<" ";
        st.push(y);
        
        temp.pop();
        
    }
    cout<<endl;
    while (st.size() > 0 )
    {
        cout<<st.top()<<" ";
        int x = st.top();
        st.pop();
        temp.push(x);

    }
    
    
   
    return 0;
}