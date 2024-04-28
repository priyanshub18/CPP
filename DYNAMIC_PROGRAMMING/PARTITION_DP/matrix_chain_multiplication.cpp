#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
#include <bits/stdc++.h>
int f(int i , int j , int* arr, vector<vector<int> >& dp){
    if(i == j) return 0;
    if(dp[i][j] != -1) return dp[i][j];
    int mini = 1e9;
    for(int k = i ; k < j ; k++){
        int steps = arr[i-1] * arr[k]* arr[j] + f(i , k, arr,dp) + f(k+1 , j , arr,dp);
        mini = min(mini , steps);
    }


    return dp[i][j] = mini;
}
int matrixChainMultiplication(int* arr, int n) {
    vector<vector<int> > dp;
    dp.resize(n+1 , vector<int>(n+1 , -1));
    //here in this sawal n is not the size of the array rather than the number of matrices
    return f(1 , n , arr,dp);
}


//bottom up solution 
int matrixChainMultiplication(int* arr, int n) {
    vector<vector<int> > dp;
    dp.resize(n+1 , vector<int>(n+1 , -1));
    int N = n+1;
    //here in this sawal n is not the size of the array rather than the number of matrices

    for(int i = 1 ; i < N ; i++){
        dp[i][i] = 0;
    }
    for(int i = N-1 ; i >= 1 ; i--){
        for(int j = i + 1 ; j < N ; j++){
             int mini = 1e9;
            for(int k = i ; k < j ; k++){
                 
                int steps = arr[i-1] * arr[k]* arr[j] + dp[i][k] + dp[k+1][j];
                mini = min(mini , steps);
            }


                dp[i][j] = mini;
        }
    }
    return dp[1][N-1];
}
int main(){
    
    return 0;
}