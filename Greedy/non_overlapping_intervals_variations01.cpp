#include<iostream>
#include<vector>
                    
using namespace std;
    bool cmp(vector<int> v1 , vector<int> v2){
        return v1[1] < v2[1];
    }
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        
        sort(intervals.begin() , intervals.end() , cmp);
        int n = intervals.size();
        // vector< vector<int> > v;
        // v.push_back(intervals[n-1]);
        int lastEndtime = intervals[0][1];
        int count = 0;
        for(int i = 1 ; i < n ; i++){

            if(intervals[i][0] < lastEndtime){
               count++;
                
            }
            else{
                lastEndtime = intervals[i][1];
            }
        }
    
        return count;
    }
};                        
int main(){
    
    return 0;
}