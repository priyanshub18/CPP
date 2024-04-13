#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;

int f(vector<vector<int>> &points,int day , int last,vector<vector<int>> & dp){
    if( day == 0){
        int maxi = 0;
        for(int i = 0 ; i <= 2 ; i++){
            if(i != last){
                maxi = max(maxi , points[day][i]);
            }
        }
        return maxi;
    }
    if(dp[day][last] != -1) return dp[day][last] ;
    int maxi = 0;
    for(int i = 0 ; i <= 2 ; i++){
            if(i != last){
                int p = points[day][i] + f(points , day -1 , i,dp);
                maxi = max(maxi , p);
            }
        }

        return dp[day][last]  = maxi;
}
int ninjaTraining(int n, vector<vector<int>> &points)
{

    vector<vector<int> > dp(points.size() +1 , vector<int>(4 , -1));
    return f(points,n-1 , 3,dp);
}                     
int main(){
    
    return 0;
}