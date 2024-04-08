#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class NumArray {
public:
    vector<int> st;//segment tree
    int n ;
    NumArray(vector<int>& nums) {
        n = nums.size();
        st.resize(4 * n );
        buildTree(nums , 0 , 0 , n-1);
    }
    void buildTree(vector<int>& nums , int  i, int lo , int hi){
            if(lo == hi) {
                st[i] = nums[hi];
                return ;
            }
            int mid = lo + (hi - lo ) /2 ;
            buildTree(nums , 2 * i +1 , lo , mid);
            buildTree(nums , 2 * i +2 , mid+1 , hi);
            st[i] = st[2 * i +1 ] + st[2 * i + 2];
    }

    void changeValue(int i , int lo , int hi , int& idx , int& val){
        if(lo == hi){
            st[i] = val; 
            return;
        }
        int mid = lo + ( hi - lo)/2;
        if(idx <= mid){
            changeValue(2 * i + 1 , lo , mid , idx , val);
        }
        else if( idx > mid){
            changeValue(2 * i + 2 , mid + 1 , hi , idx , val);
        }


         st[i] = st[2 * i +1 ] + st[2 * i + 2];

    }
    void update(int index, int val) {
        changeValue(0 , 0 ,n -1 , index , val);
    }
    int getSum(int i , int lo , int hi , int& l , int& r){
        if( r < lo or l > hi) return 0;
        if(lo >= l and hi <= r) return st[i];
        int mid = lo + (hi -  lo)/2;
        int left  = getSum(2 * i + 1 , lo , mid , l ,r);
        int right = getSum(2 * i + 2 , mid + 1 , hi , l ,r);
            return left + right;
    }
    int sumRange(int left, int right) {
      return getSum(0 , 0 , n-1 , left , right);


    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */                       
int main(){
    
    return 0;
}