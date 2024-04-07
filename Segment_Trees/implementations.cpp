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
int main(){
    vector<int> v {1,4,2,8,6,4,9,3};
    int n = v.size();
    st.resize(4*n , INT_MIN);
    build_tree(v,0,0 , n-1);

    for(int i = 0 ; i < st.size() ;i++){
        cout<<st[i]<<" ";
    }
    return 0;
}