#include<bits/stdc++.h>
#include<unordered_set>
                    
using namespace std;

//this code handles the repeated cases aswell 


void f(string& str , int i){
    if(i == str.size() -1 ){
        cout<<str<<"\n";
        return ;
    }

    unordered_set<char> s;

    for(int j = i ; j < str.size(); j++){

        if(s.count(str[j])) continue;

        s.insert(str[j]);
        swap(str[i] , str[j]);
        f(str , i+1);
        swap(str[i] , str[j]);


    }
        
}                       
int main(){
    string s = "aba";
    f(s , 0);
    return 0;
}