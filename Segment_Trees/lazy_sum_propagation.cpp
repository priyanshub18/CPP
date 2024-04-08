#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
vector<int> st;
vector<int> lazy;  

void build_tree(vector<int> &v , int i , int lo ,int hi){
    if(lo == hi){
        st[i] = v[lo];
        return;
    }
    build_tree(v, 2 * i+ 1 , lo ,(lo+hi)/2);
    build_tree(v, 2 * i + 2 , (lo+hi)/2 +1, hi);
    st[i] = st[2 * i+1] + st[2 * i +2];
}
int getSum(int i , int lo , int hi , int l , int r){
    //check for pending lazy updates;
    if(lazy[i] != 0){
        int rangeSize = hi - lo + 1 ;
        st[i] += rangeSize * lazy[i];
        if(lo != hi){
            //send lazy to left and right child
            lazy[2 * i + 1] += lazy[i];
            lazy[2 * i + 2] += lazy[i];
        }

    }
    if( r < lo or l > hi) return 0;
    if(lo >= l and hi <= r) return st[i];
    int mid = (lo + hi)/2;
    int left  = getSum(2 * i + 1 , lo , mid , l ,r);
    int right = getSum(2 * i + 2 , mid + 1 , hi , l ,r);
        return left + right;
}

void updateRange(int i , int lo , int hi , int l , int r , int val){
    if(lazy[i] != 0){
        int rangeSize = hi - lo + 1 ;
        st[i] += rangeSize * lazy[i];
        if(lo != hi){
            //send lazy to left and right child
            lazy[2 * i + 1] += lazy[i];
            lazy[2 * i + 2] += lazy[i];
        }
        lazy[i] = 0;
    }
    if( r < lo or l > hi) return ;
    if(lo >= l and hi <= r){
        //update entire [lo , hi];
        int rangeSize = hi - lo + 1 ;
        st[i] += rangeSize * val;
        if(lo != hi){
            lazy[2 * i + 1] += lazy[i];
            lazy[2 * i + 2] += lazy[i];
        }
    return;
    }
    int mid = lo + ( hi - lo) /2;
    updateRange(2 * i + 1 , lo , mid , l ,r , val);
    updateRange(2 * i + 2 , mid +1 , hi , l , r, val);

    st[i] = st[2 * i + 1] + st[2 * i + 2];
}
int main(){
    vector<int> v {1,4,2,8,6,4,9,3};
    int n = v.size();
    st.resize(4 * n , INT_MIN);
    lazy.resize(4 * n , 0);
    build_tree(v,0,0 , n-1);
    // int l , r ;
    // cout<<"Enter the range: ";
    // cin>>l>>r;
    cout<<getSum(0 , 0 , n - 1 , 1 ,3)<<endl;
    updateRange(0 ,0 , n -1 , 2 , 5 , 10);
    cout<<getSum(0 , 0 , n - 1 , 1 ,3)<<endl;

   
    return 0;
}