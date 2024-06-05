#include<bits/stdc++.h>
#include<vector>
                    
using namespace std; 


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char , int > mp;
        int l = 0;
        int r = 0;


        int max_len = 0;
        int n = s.length();

        while(r < n){
            char ch = s[r];
            if(mp.find(ch) != mp.end()){
                if(l <= mp[ch])
                    {
                        l = mp[s[r]] + 1 ;
                        mp.erase(s[r]);
                    }
            }

            int len = r-l+1;
            cout<<len<<" "<<r<<endl;
            max_len = max(max_len , r-l+1);
            mp[ch]= r;
            r++;
        }

        return max_len;
    }
};
int main(){
    
    return 0;
}