#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& num) {
        int cur = 0;
        int cnt = 0;
        for (int x : num) {
            if (cnt == 0)
                cur = x, cnt = 1;
            else if (cur == x)
                ++cnt;
            else
                --cnt;
        }
        return cur;
    }
};                  
int main(){
    
    return 0;
}