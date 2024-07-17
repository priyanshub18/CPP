#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution {
public:
    vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> st;
        for (string s : wordList) {
            st.insert(s);
        }
        queue<vector<string>> q;
        q.push({beginWord});

        vector<string> usedOnLevel;
        usedOnLevel.push_back(beginWord);

        int level = 0;

        vector<vector<string>> ans;
        while(not q.empty()){
            vector<string> vec = q.front();

            if(vec.size() > level){
                level++;
                for(auto it : usedOnLevel){
                    st.erase(it);
                }
                usedOnLevel = {};
            }

            q.pop();
            string word = vec.back();
            if(word == endWord){
                ans.push_back(vec);
                continue;
            }

            for(int i = 0 ; i < word.length() ; i++){
                char c = word[i];
                for(int j = 0 ; j < 26 ; j++){
                    word[i] =  j + 'a';
                    if(st.find(word) != st.end()){
                        usedOnLevel.push_back(word);
                        vec.push_back(word);
                        q.push(vec);
                        vec.pop_back();
                    }
                }
                word[i] = c;
        }
        }



    return ans ;
    }
};            
int main(){
    
    return 0;
}