#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
             
int main(){

    string a = "abcde", b = "abcs";
    int m = a.size();
    int n = b.size();
    vector<vector<int> > dp(m+1 , vector<int>(n+1 , -1));

    for(int i = 0 ; i <= m ; i++ ) dp[i][0] = 0;
    for(int j = 0 ; j <= n ; j++ ) dp[0][j] = 0;
    for(int i = 1  ; i <= m ; i++){
        for(int j = 1 ; j <= n ; j++){
        int ans = 0;
        if(a[i-1] == b[j-1]) ans=  1 + dp[i-1][j-1];
        else ans = max(dp[i-1][j] , dp[i][j-1]);
            dp[i][j] = ans;
        }
	}
    int len = dp[m][n];
    string ans = "";
    for(int i = 0 ; i < len ; i++){
        ans += "&";
    }
    int idx = len -1;
    int i = n, j = m ;
    while(i > 0 and j > 0){
        if(a[i-1] == b[j-1]){
            ans[idx] = a[i-1];
            idx--;
            i--;j--;
        }

        else if(dp[i-1][j] > dp[i][j-1]) i--;
        else j--;

    }

    cout<<ans;
    return 0;
}




