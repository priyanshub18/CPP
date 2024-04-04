#include<iostream>
#include<vector>
                    
using namespace std;
    bool cmp(vector<int> v1 , vector<int> v2){
        return v1[1] < v2[1];
    }
    bool cmp2(vector<int> v1 , vector<int> v2){
        return v1[0] < v2[0];
    }
class Solution {
public:
    
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin() , intervals.end() , cmp);
        int n = intervals.size();
        vector< vector<int> > v;
        v.push_back(intervals[n-1]);

        for(int i = n-2 ; i >= 0 ; i--){
            vector<int> lastInterval = v[v.size()-1];
            vector<int> curr = intervals[i];

            if(curr[1] >= v[v.size()-1][0]){
                v[v.size()-1][0]= min(v[v.size()-1][0] , curr[0]);
                v[v.size()-1][1]= max(v[v.size()-1][1] , curr[1]);
            }
            else{
                v.push_back(intervals[i]);
            }
        }
        


        
        sort(v.begin() , v.end() , cmp2);
        return v;
    }
};                       
int main(){
    
    return 0;
}