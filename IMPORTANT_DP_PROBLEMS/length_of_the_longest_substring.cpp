#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
                        
int main(){
    string a = "abcd" , b = "abcd";
    int m = a.length();
    int n = b.length();
    vector<vector<int> >  dp(m+1 , vector<int>(n+1 , 0 ));
    int maxi = INT_MIN;
    for(int i = 1 ; i <= m ; i++){
        for(int j = 1 ; j <= n  ;j++){
            if(a[i-1] == b[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1];
                maxi = max(maxi , dp[i][j]);
            }
            else dp[i][j] = 0;
        }
    }

    cout<<maxi;


    return 0;
}