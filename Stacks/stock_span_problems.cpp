#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class StockSpanner {
public:
    stack<pair<int, int>> st;
    int i = 0;
    int nglindex;

    StockSpanner() {}

    int next(int price) {

        if (st.empty()) {

            nglindex = -1;

        } else {
            while (!st.empty() && st.top().first <= price) {
                st.pop();
            }
            if (st.empty()) {
                nglindex = -1;
            } else {
                nglindex = st.top().second;
            }
        }
        st.push({price, i});
        int span = i - nglindex;
        i++;
        return span;
    }
};            
int main(){
    
    return 0;
}