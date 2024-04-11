#include<iostream>
#include<vector>
                    
using namespace std;
vector<int> dp;
int f(int n ){
    if(n == 3 or n== 2 ) return 1;
    if(n == 1) return 0;
    if(dp[n] != -1) return dp[n];
    return dp[n] = 1+ min(f(n-1),  min((n% 2 == 0)?f(n/2 ): INT_MAX , (n% 3 == 0)?f(n/3): INT_MAX));
}
vector<int> d;
int bottomUP(int n ){
    d[1] = 0;
    d[2] = 1;
    d[3] = 1;

    for(int i = 4 ; i <= n ;i++){
        d[i] = 1+min(d[i-1] , min((n%2 == 0)?d[i/2]: INT_MAX,(n% 3 == 0)?d[i/3]:INT_MAX));
    }

    return d[n];
}
int main(){
    int n =10 ;
    // dp.clear();
    // dp.resize(1005 , -1);
    d.resize(1005 , -1);
    cout<<bottomUP(n);
    cout<<f(n);
    return 0;
}