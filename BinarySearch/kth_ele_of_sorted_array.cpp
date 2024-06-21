#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution {
public:
    // Binary Search.
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2, int k) {
        int n1 = nums1.size();
        int n2 = nums2.size();

        if(n1 > n2) return findMedianSortedArrays(nums2, nums1 , k);

        int low = max(0,k-n2), high = max(n1,k);
        int ele_on_left = k;
        int n = n1 + n2;

        while(low <= high) {
            int mid1 = (low + high) >> 1;
            int mid2 = ele_on_left - mid1;

            int l1 = INT_MIN, l2 = INT_MIN;
            int r1 = INT_MAX, r2 = INT_MAX;

            if(mid1 < n1) r1 = nums1[mid1];
            if(mid2 < n2) r2 = nums2[mid2];

            if(mid1 >= 1) l1 = nums1[mid1 - 1];
            if(mid2 >= 1) l2 = nums2[mid2 - 1];

            if(l1 <= r2 && l2 <= r1){
               return max(l1, l2);
                
            }
            else if(l1 > r2) high = mid1 - 1;
            else low = mid1 + 1;
        }
        return 0;
    }
};                
int main(){
    
    return 0;
}