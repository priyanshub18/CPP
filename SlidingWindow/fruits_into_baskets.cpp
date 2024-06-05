#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
int totalFruits(int N, vector<int> &fruits) {
        unordered_map<int , int > mp;
        
        int l = 0 , r = 0 , max_len = 0;
        
        while(r < N){
            mp[fruits[r]] = r;
            if(mp.size() > 2){
                int idx = mp[l];
                mp.erase(mp[l]);
                l = idx+1;
            }
            int len = r-l+1;
            max_len = max(max_len , len);
            
            r++;
        }
        
        
        return max_len;
        
        
    }                   
int main(){
    vector<int> f;
    f.push_back(2);
    f.push_back(1);
    f.push_back(2);
    // f.push_back(2);
    // f.push_back(2);
    // f.push_back(2);
    int N = f.size();


    cout<<totalFruits(N , f);

    return 0;
}