#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;

class Solution {
public:
    int numberOfSubstrings(string s) {
        int ans = 0;
        vector<int> seen(3, -1);

        for(int i=0; i<s.length(); i++){
            seen[s[i]-'a'] = i;
            if( seen[0]!=-1 && seen[1]!=-1 && seen[2]!=-1 ){
                ans = ans + 1 + min(seen[0], min(seen[1], seen[2]));
            }
        }
        return ans;        
    }
};


int main(){
    
    return 0;
}