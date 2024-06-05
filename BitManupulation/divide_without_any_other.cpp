#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == divisor)
        return 1;

        bool sign = true ;
        if(dividend >= 0 && divisor < 0) sign = false ;
        else if(dividend <= 0 && divisor > 0  ) sign = false ;

        long n = abs(dividend) ;
        long d = abs(divisor) ; 
        long quotient = 0;

        while (n>=d){
            int cnt = 0;
            while(n>= (d<<(cnt +1))){
                cnt++;
            }
            quotient += 1<<cnt;
            n -= (d<<cnt);
        }
        if(quotient == 1<<31 && sign){
            return INT_MAX;
        }
        if(quotient == 1<<31 && !sign){
            return INT_MIN;
        }

        return sign ? quotient : -quotient;



    }
};                      
int main(){
    
    return 0;
}