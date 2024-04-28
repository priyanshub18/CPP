#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
string a;
string b;
vector<vector<int> > dp;
int f(int i , int j){
    if(i < 0 or j < 0 ) return 0;
    int ans = 0;

    if(dp[i][j] != -1) return  dp[i][j];
    if(a[i] == b[j]){
        ans=  1 + f(i-1 , j-1);
    }

    else{
        ans = max(f(i-1, j) , f(i , j -1 ));
    }

    return dp[i][j] = ans;
}                      
int main(){
    a = "abcde", b = "abcs";
    int i = a.size();
    int j = b.size();

    dp.resize(i , vector<int>(j , -1));
    cout<<f(i-1,j-1);
    return 0;
}



//shifting of the index 
//is that we are talkig about at the moment
#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
string a;
string b;
vector<vector<int> > dp;
int f(int i , int j){
    if(i == 0 or j== 0 ) return 0;
    int ans = 0;

    if(dp[i][j] != -1) return  dp[i][j];
    if(a[i-1] == b[j-1]){
        ans=  1 + f(i-1 , j-1);
    }

    else{
        ans = max(f(i-1, j) , f(i , j -1 ));
    }

    return dp[i][j] = ans;
}                      
int main(){

    a = "abcde", b = "abcs";
    int m = a.size();
    int n = b.size();

    dp.resize(m+1 , vector<int>(n+1 , -1));

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

    cout<<dp[m][n];
    return 0;
}


