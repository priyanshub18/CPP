#include<bits/stdc++.h>

using namespace std;

void permutations(vector<string>&v ,string ans , string original){ 
    if(original.length() == 0){
        v.push_back(ans);
        return ;
    }

    for(int i = 0 ; i < original.length();i++){
        char ch = original[i];
        string left = original.substr(0,i);
        string right = original.substr(i+1);
        permutations(v ,ans+ch , left+right);
    }
   


}
int main(){
    vector<string> v;
    permutations( v ,"" , "abcd");
    for(int i = 0 ; i <v.size();i++){
        cout<<i+1<<" "<<v[i]<<endl;
    }

}
    