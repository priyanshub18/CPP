#include<iostream>

using namespace std;
//bekr in term of space complexity
void removeChar(string ans , string orginal){
    if(orginal.length() == 0){
        cout<<ans<<endl;
        return;
    }
    char ch = orginal[0];
    if(ch == 'a') removeChar(ans,orginal.substr(1));
    else  removeChar(ans+ch,orginal.substr(1));
}

//good in terms 
void removeChar2(string ans , string orginal, int idx){
    if(orginal.length() == 0){
        cout<<ans<<endl;
        return;
    }
    char ch = orginal[idx];
    if(ch == 'a') removeChar2(ans,orginal,idx+ 1);
    else  removeChar2(ans+ch,orginal , idx+1);
}


int main(){
    string str = "Priyanshu bhardwaj";
    removeChar2("" , str,0);
}