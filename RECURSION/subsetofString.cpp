#include<iostream>
#include<vector>

using namespace std;

void printsubSet(string ans , string original , vector<string>& v){
    if(original.length() == 0){
        // cout<<ans<<endl;
        v.push_back(ans);
        return;
    }
    char ch = original[0];
    printsubSet(ans+ch , original.substr(1),v);
    printsubSet(ans , original.substr(1),v);
}

int main(){
    vector<string> v;
    printsubSet("" , "abc" , v);
    for( string ele : v){
        cout<<"'"<<ele<<"'"<<endl;
    }
    }