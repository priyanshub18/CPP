#include<iostream>
#include<vector>
                    
using namespace std;
bool cmp(vector<int> v1 , vector<int> v2){
        return v1[1] < v2[1];
    }
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin() , points.end() , cmp);
        int n = points.size();
        // vector< vector<int> > v;
        // v.push_back(intervals[n-1]);
        int lastEndtime = points[0][1];
        int count = 0;
        for(int i = 1 ; i < n ; i++){

            if(points[i][0] <= lastEndtime){
               count++;
                
            }
            else{
                lastEndtime = points[i][1];
            }
        }
    
        return n - count;
    }
    };
                       
int main(){
    
    return 0;
}