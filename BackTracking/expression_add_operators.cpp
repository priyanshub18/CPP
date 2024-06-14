#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution {
public:
    vector<string> ans;
    void solve(int idx , string num , int tar , string curr ,long prev , long res){
        if(idx == (int)num.length()){
            if(res == tar){
                ans.push_back(curr);
            }
            return;
        }
        string st = "";
        long currRes = 0;
        for(int i = idx ; i < num.length() ; i++){
            if(i >idx and num[idx] == '0') break;
            st += num[i];
            currRes = currRes * 10 + (num[i] - '0');
            if(idx == 0){
                solve(i+1 , num , tar , st , currRes , currRes );
            }else{
                solve(i+1 , num , tar , curr+"+" +st ,currRes, res +currRes );
                solve(i+1 , num , tar ,  curr+"-" +st ,-currRes, res - currRes );
                solve(i+1 , num , tar,  curr+"*"+st ,currRes*prev , res - prev +(prev * currRes) );
            }

        }


    }
    vector<string> addOperators(string num, int target) {
        solve(0,num , target , "",0,0);
        return ans;
    }
};                     
int main(){
    
    return 0;
}