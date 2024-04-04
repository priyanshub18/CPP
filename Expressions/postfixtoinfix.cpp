#include<iostream>
#include<stack>

using namespace std;

string solve(string val1 , string val2 , char op){
    string s = "";
    s+= val1;
    s.push_back(op);
    s+=val2;

    return s;


}                 
int main(){
    string s = "79+4*8/3-";
    //we need two stacks

    stack<string> val;
    

    for(int i = 0 ; i < s.size() ; i++){
        char ele = s[i];
        if(s[i] >= 48 && s[i] <= 57) val.push(to_string( ele-48) );

        else{
            char op = s[i];
            string val1 = val.top();
            val.pop();
            string val2 = val.top();
            val.pop();
            string ans = solve(val1 , val2, op);
            val.push(ans);   
                    }


    }
    

    cout<<val.top();
    return 0;
}