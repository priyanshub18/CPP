#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int mod = 1000000007;
        int n = arr.size();
        vector<int> nsi(n) , psi (arr.size());


        stack<int> st , pt;

        //first we find out nsi
        nsi[n-1]= n;
        st.push(n-1);
        for(int i = n-2 ; i >= 0 ; i--){
            while(not st.empty() and arr[st.top()] >= arr[i]) st.pop();

            if(st.empty()) nsi[i] = n;
            else nsi[i] = st.top();


            st.push(i);
        }
        psi[0] = -1;
        pt.push(0);
        for(int i = 1 ; i < n ; i++){
            while( not pt.empty() and arr[pt.top()] > arr[i]) pt.pop();
            if(pt.empty()) psi[i] = -1;
            else psi[i] = pt.top();


            pt.push(i);
        }
        long long ans = 0;
        for(int i = 0 ; i <  n ; i++){
            int  first = i - psi[i];
            int  next =nsi[i] - i;

            long long prod = (first * next)% mod;
            prod = (prod* arr[i])%mod;
            ans = (ans%mod + prod)%mod;
        }
        
        return ans;
    }
};            
int main(){
    
    return 0;
}