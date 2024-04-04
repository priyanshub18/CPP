#include<iostream>
#include<string>


using namespace std;


int main(){
    string s;
    getline(cin , s);

    int count = 0;
    for(int i = 0 ; i < s.length() ; i++){
        if(s.length() == 1)  break;
        if((i == 0  && s[i] != s[i+1]) || (i == s.length()- 1  && s[i-1] != s[i])) count++;
        else if(s[i] != s[i+1] && s[i-1] != s[i]){
            count++;
        }


    }

    cout<<count;
}