#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
vector<int> st;  

void build_tree(vector<int> &v , int i , int lo ,int hi){
    if(lo == hi){
        st[i] = v[lo];
        return;
    }
    build_tree(v, 2 * i+ 1 , lo ,(lo+hi)/2);
    build_tree(v, 2 * i + 2 , (lo+hi)/2 +1, hi);
    st[i] = max(st[2 * i+1] , st[2 * i +2]);
}
int getMax(int i , int lo , int hi , int& l , int& r){
    if( r < lo or l > hi) return INT_MIN;
    if(lo >= l and hi <= r) return st[i];
    int mid = (lo + hi)/2;
    int left  = getMax(2 * i + 1 , lo , mid , l ,r);
    int right = getMax(2 * i + 2 , mid + 1 , hi , l ,r);
        return max(left , right);


    
}
int main(){
    vector<int> v {1,4,2,8,6,4,9,3};
    int n = v.size();
    st.resize(4*n , INT_MIN);
    build_tree(v,0,0 , n-1);
    int l , r ;
    cout<<"Enter the range: ";
    cin>>l>>r;
    cout<<getMax(0 , 0 , n - 1 , l ,r)<<endl;
    // for(int i = 0 ; i < st.size() ;i++){
    //     cout<<st[i]<<" ";
    // }
    return 0;
}