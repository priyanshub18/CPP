#include<iostream>
#include<vector>
                    
using namespace std;
void f(string s , int n ){
    if(n == s.length()) {
        cout<<s<<" ";
        return;
    }
    if(s.length()== 0 || s[s.length()-1] == '0'){
        f(s+'0' , n);
        f(s+'1' , n);
    }
    else{
        f(s+'0' , n);
    }
}                 
int main(){
    int n = 4;
    string s = "";
    f(s ,n);
    return 0;
}