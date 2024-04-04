#include<iostream>
#include<stack>
                    
using namespace std;
string removeDuplicate(string &s)
{
    stack<char> st;
    st.push(s[0]);
    for(int i = 1 ; i < s.size() ;i++){
        if(st.top() != s[i]) st.push(s[i]);

        i++;
    }

    string ss = "";
    while(st.size() > 0){
        ss+= st.top();
        st.pop();
    }

    reverse(ss.begin() , ss.end());
    return ss;
}
                        
int main(){
    string s = "aabbcccddeffg";
    cout<<removeDuplicate(s);
    return 0;
}