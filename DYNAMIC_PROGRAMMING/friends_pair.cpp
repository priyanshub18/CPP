#include<iostream>
#include<vector>
                    
using namespace std;
vector<int> dp;
int pairs(int n){
    if(n == 1 or n == 2) return n;
    if(dp[n] != -1) return dp[n];
    int ans =  pairs(n-1) + (n-1)*pairs(n-2);
    return dp[n] = ans;

    }                        
int main(){
    int n ;
    cin>>n ;
    dp.resize(10005 , -1);
    cout<<pairs(n);
    return 0;
}