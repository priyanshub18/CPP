#include<iostream>
using namespace std;
 long long fact(long long n ){
            if( n == 0 || n == 1) return 1;
            return n * fact(n-1);
    }  
      int climbStairs(int n) {
        long long ones = (long long)n ;
        long long twos = 0 ;
        long long ways = 0; 
        if(n & 1){
            while( (int)ones >=1){
                ways += fact(ones + twos)/(fact(ones)*fact(twos));
                ones-=2;
                twos++;
            }
        }
        else{
            while( ones >=0){
                ways += fact(ones + twos)/(fact(ones)*fact(twos));
                ones-=2;
                twos++;
            }
        }
       return (int)ways;
    }

int main(){
//     class Solution {
// public:
//     int climbStairs(int n) {
//         if(n == 1) return 1;
//         if( n == 2) return 2;
//         else return climbStairs(n-1)+climbStairs(n-2);

//     }
// };
   cout<<climbStairs(7);

   

}