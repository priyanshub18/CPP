#include<iostream>
#include<vector>
#define k 3
using namespace std;

void printsubSet(string ans , string original ){
    if(original.length() == 0){
        if(ans.length() == k){
            cout<<ans<<endl;
        }
       
        return;
    }
    char ch = original[0];
    printsubSet(ans+ch , original.substr(1));
    printsubSet(ans , original.substr(1));
}

int main(){
    // vector<string> v;
    
    printsubSet("" , "abcdef");
    // for( string ele : v){
    //     cout<<"'"<<ele<<"'"<<endl;
    // }
    }