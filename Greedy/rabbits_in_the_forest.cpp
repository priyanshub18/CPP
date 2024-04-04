#include<iostream>
#include<vector>
                    
using namespace std;
class Solution {
    public:
        int numRabbits(vector<int>& v){
            sort(v.begin() , v.end());
            int score = 0;
            int i = 0;
            while(i < v.size()){
                int size = v[i]+1;
                int curr = 1;
                while(v[i+1] == v[i] && curr < size){
                    i++;
                    curr++;
                }
                score += size;
                i++;


            }

            return score;
        }
};                       
int main(){
    
    return 0;
}