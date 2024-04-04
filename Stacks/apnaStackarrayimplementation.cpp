#include<iostream>
#include<vector>
                  //vector implementation is also easy just replace the array with  vector
using namespace std;
class Stack{
    public:
    int arr[5];
    int idx ;

    Stack(){
        idx = -1;
    }

    void push(int val){
//use base condition for stack overflow 
        idx++;
        arr[idx] = val;
    }

    void pop(){
        if(idx == -1) cout<<"Stack is empty";
        idx--;
    }
    int top(){
        if(idx == -1){
             cout<<"Stack is empty";
             return -1;
             }
        return arr[idx];
    }
    int size(){
        return idx+1;
    }
};                       
int main(){
    Stack st ;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(20);
    st.push(30);
    st.push(20);
    st.push(30);
   

    st.pop();
    cout<<st.size();


    return 0;
}