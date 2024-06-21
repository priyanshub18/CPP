#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        vector<int> nums = arr;
        int n = nums.size();
        if(n == 1) return 0;

        if(nums[0] > nums[1]) return 0;
        if(nums[n-1] > nums[n-2]) return n-1;

        int lo = 1 , hi = n-2;

        while(lo <= hi){
            int mid = lo + ((hi-lo)>>2);


            //check if mid the peak element
            if(arr[mid-1] < arr[mid] and arr[mid] > arr[mid +1]){
                return mid;
            }

            //check for increasing or decreasing curve
            else if(arr[mid] > arr[mid -1] and arr[mid +1 ] > arr[mid]){
                lo = mid +1;
            }
            else{
                hi = mid -1;
            }

        }
        return -1;
    }
};            
int main(){
    
    return 0;
}
