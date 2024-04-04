#include<iostream>
#include<stack>
int prior(char ch){
    if( ch == '+' || ch == '-') return 1;
    else return 2;
}   

int solve(int val1 , int val2 , char op){
    if(op == '+') return val1 + val2;
    else if(op == '-') return val1 - val2;
    else if(op == '*') return val1 * val2;
    else return val1 / val2;

}
using namespace std;
                        
int main(){
    string s = "2+6*4/8-3";
    //we need two stacks

    stack<int> val;
    stack<char> op;

    for(int i = 0 ; i < s.size() ; i++){
        //check if s[i] is a digit or not
        char ele = s[i];
        //int ascii = (int)ele;
        if(ele >= 48 && ele <= 57){
            val.push(ele-48);
        }
        else{
            if(op.size() == 0 || prior(ele) > prior(op.top())) op.push(ele);

            else{//work
                //i have to do val1 and val2

                while(op.size() > 0 && prior(ele)  <= prior(op.top())){
                    // i have to do val1 op val2
                    char ch = op.top();
                    op.pop();
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();


                    int ans = solve(val1 , val2 , ch);
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
        int val2 = val.top();
        val.pop();
        int val1 = val.top();
        val.pop();


        int ans = solve(val1 , val2 , ch);
        val.push(ans);
    }

    cout<<val.top();
    return 0;
}