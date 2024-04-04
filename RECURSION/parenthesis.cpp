#include<iostream>
#include<vector>
using namespace std;
 void parenthesis(vector<string>& answer , string s , int op , int cl , int n  ){
        if( cl == n){
            answer.push_back(s);
            return ;
        }
        if(op < n){
            parenthesis(answer , s+'(' , op+1 , cl , n);
        }
        if(cl < op ){
            parenthesis(answer , s+')', op , cl+1 , n);
        }
    }
int main(){
        int n = 3;
        int op = 0 ;
        int cl = 0;
        string s = "";
        vector<string> answer ;

        parenthesis(answer , s , op , cl , n);
        for(string ele : answer){
            cout<<ele<<endl;
        }
}

