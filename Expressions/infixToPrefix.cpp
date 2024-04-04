#include<iostream>
#include<stack>

using namespace std;
int prior(char ch){
    if( ch == '+' || ch == '-') return 1;
    else return 2;
}   

string solve(string val1 , string val2 , char op){
    string s;
    s.push_back(op);
    s+=val1;
    s+=val2;
    
  
    return s;
}
using namespace std;
                        
int main(){
    string s = "(7+9)*4/8-3";
    //we need two stacks

    stack<string> val;
    stack<char> op;

    for(int i = 0 ; i < s.size() ; i++){
        //check if s[i] is a digit or not
        char ele = s[i];
        //int ascii = (int)ele;
        if(ele >= 48 && ele <= 57){
            val.push(to_string(ele-48));
        }
        else{
            if(op.size() == 0 ) op.push(ele);
            else if(ele == '(') op.push(ele);
            else if(op.top() == '(') op.push(ele);
           
            else if(ele ==')'){
                while(op.top() != '('){
                    char ch = op.top();
                    op.pop();
                    string  val2 = val.top();
                    val.pop();
                    string val1 = val.top();
                    val.pop();


                    string ans = solve(val1 , val2 , ch);
                    val.push(ans);
                }
                op.pop();
            }
            else if( prior(ele) > prior(op.top())) op.push(ele);

            else{//work
                //i have to do val1 and val2

                while(op.size() > 0 && prior(ele)  <= prior(op.top())){
                    // i have to do val1 op val2
                    char ch = op.top();
                    op.pop();
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top();
                    val.pop();


                    string ans = solve(val1 , val2 , ch);
                    val.push(ans);



                }
                op.push(ele);
            }
        }
    }

    //op stack can have values 
    // so make it empty;

    while(op.size()> 0 ){
        char ch = op.top();
        op.pop();
        string val2 = val.top();
        val.pop();
        string val1 = val.top();
        val.pop();


        string ans = solve(val1 , val2 , ch);
        val.push(ans);
    }

    cout<<val.top();
    return 0;
}