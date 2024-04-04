#include<iostream>
#include<stack>
                    
using namespace std;
bool isBalanced(string S){
    stack<char> st;
    int i = 0 ;
    while(S[i] != '\0'){
        if(S[i] == '(') st.push(S[i]);
        else {
            if(st.size() == 0) return false;
            else  st.pop();
            
        }
    i++;
    }

    if(st.size() == 0) return true;
    return false;
}                       
int main(){
    string s = "(((())))())";
    cout<<isBalanced(s);
    return 0;
}