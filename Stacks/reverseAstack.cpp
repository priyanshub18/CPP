#include<iostream>
#include<stack>
#include<vector>
                    
using namespace std;
                        
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    stack<int> temp;
    stack<int> temp2;
    //use three stacks
    while(st.size() > 0 ){
        temp.push(st.top());
        st.pop();
    }
    while(temp.size() > 0 ){
        temp2.push(temp.top());
        temp.pop();
    }
    while(temp2.size() > 0 ){
        st.push(temp2.top());
        temp2.pop();
    }
    while(st.size() > 0 ){
        cout<<st.top()<<" ";
        st.pop();
    }



    //use array
    vector<int> v ;

    while (st.size())
    {
       v.push_back(st.top());
       st.pop();
    }

    for(int i  = 0 ; i < v.size(); i++){
        st.push(v[i]);
    }

    while(st.size() > 0 ){
        cout<<st.top()<<" ";
        st.pop();
    }



    

    
    return 0;
}