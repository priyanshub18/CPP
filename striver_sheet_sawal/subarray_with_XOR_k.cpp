#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
int count(vector<int>& v , int k){
    int xr = 0;
    int count = 0;
    unordered_map<int , int > mp;

    mp[xr]++;
    for(int i = 0 ; i < v.size() ; i++){
        xr ^= v[i];
        count += mp[xr ^ k];
        mp[xr]++;
    }


    return count;
}                     
int main(){
    vector<int> v {4 ,2 ,2 ,6 ,4};
    cout<<count(v,  6);
    return 0;
}