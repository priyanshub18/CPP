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

    vector<vector<int> > dp(points.size() +1 , vector<int>(4 , 0));
    dp[0][0] = max(points[0][1] , points[0][2]);
    dp[0][1] = max(points[0][0] , points[0][2]);
    dp[0][2] = max(points[0][1] , points[0][1]);
    dp[0][3] = max(points[0][1] , max(points[0][1],points[0][2]));

    for(int day = 1 ; day < n ;day++){
        for(int last = 0 ; last < 4 ; last++){
            dp[day][last] = 0;
            int maxi = 0;

            for(int task = 0 ; task < 3 ; task++){
                if(task != last){
                    int point = points[day][task] + dp[day-1][task];
                    maxi = max(maxi , point);

                }
            }
       
        }
    }
    return dp[n-1][3];

    //return f(points,n-1 , 3,dp);
}                     
int main(){
    
    return 0;
}