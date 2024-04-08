#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class RangeFreqQuery {
public:
    vector<unordered_map<int , int> > st;
    int n;
    RangeFreqQuery(vector<int>& arr) {
        n = arr.size();
        st.resize(4 * n);
        buildTree(arr, 0 , 0 , n-1);

    }
    void buildTree(vector<int> arr, int i , int lo , int hi){
        if(hi == lo){
            st[i][arr[lo]] = 1;
            return ;
        }
        int mid = lo + ( hi  - lo )/2;
        buildTree(arr , 2 * i +1 , lo , mid);
        buildTree(arr , 2 * i +2 , mid+1 , hi);
        for(auto ele : st[2 * i +1]){
            st[i][ele.first]+=ele.second;
        }
        for(auto ele : st[2 * i +2]){
            st[i][ele.first]+=ele.second;
        }
    }
    int get(int i , int lo , int hi , int& l , int& r, int& val){
        if( r < lo or l > hi) return 0;
        if(lo >= l and hi <= r) return st[i].find(val)!=st[i].end() ? st[i][val]: 0;
        int mid = lo + (hi -  lo)/2;
        int left  = get(2 * i + 1 , lo , mid , l ,r, val);
        int right = get(2 * i + 2 , mid + 1 , hi , l ,r, val);
            return left + right;
    }
    int query(int left, int right, int value) {
        return get(0 , 0 , n-1 , left , right , value);
    }
};

int main(){
    
    return 0;
}