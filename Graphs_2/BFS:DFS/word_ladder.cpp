#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        queue<pair<string, int>> q;
        q.push({beginWord, 1});

        unordered_set<string> st;
        for (string s : wordList) {
            st.insert(s);
        }

        st.erase(beginWord);

        while(not q.empty()){
            string word = q.front().first;
            int level = q.front().second;

            if(word == endWord) return level;

            q.pop();
            for(int i = 0 ; i < word.length() ; i++){
                string s1 = word.substr(0 , i);
                string s2 = word.substr(i+1);
                for(int j = 0 ; j < 26 ; j++){
                    char ch =  j + 'a';
                    string newword = s1 + ch + s2;
                    if(st.find(newword) != st.end()){
                        st.erase(newword);
                        q.push({newword , level + 1});

                    }
                }
        }


        }



    return 0;

    }
};            
int main(){
    
    return 0;
}