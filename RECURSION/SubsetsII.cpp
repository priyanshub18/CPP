#include<iostream>
#include<vector>

using namespace std;

void printsubSet(string ans , string original , vector<string>& v , bool flag){
    if(original.length() == 0){
        // cout<<ans<<endl;
        v.push_back(ans);
        return;
    }
    char ch = original[0];
    if(original.size() == 1){
        if(flag)printsubSet(ans+ch , original.substr(1),v , true);
        printsubSet(ans , original.substr(1),v,true);
        return ;//taki neeche ki condition na chle
    }
    char dh = original[1];
    if(ch == dh){
        if(flag)printsubSet(ans+ch , original.substr(1),v , true);
        printsubSet(ans , original.substr(1),v, false);
    }
    else{
        if(flag)printsubSet(ans+ch , original.substr(1),v , true);
        printsubSet(ans , original.substr(1),v,true);
    }
    
}

int main(){
    vector<string> v;
    string s = "aba";
    sort(s.begin() , s.end());
    printsubSet("" , s , v, true);
    for( string ele : v){
        cout<<"'"<<ele<<"'"<<endl;
    }
    }