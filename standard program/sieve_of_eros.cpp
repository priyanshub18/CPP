#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution {
public:
    void fillsieve(vector<bool>& sieve){
        int n = sieve.size() - 1 ;
        for(int i = 2 ; i  <= sqrt(n) ; i++){
            for(int j = i*i ; j <= n ; j += i ){
                sieve[j]= 0;
            }
        }
    }

    int countPrimes(int n) {
         if( n <= 2) return 0;
        int count= 0 ;
        n = n -1;
       vector< bool>  sieve(n+1 , 1);//1 means prime
        fillsieve(sieve);
        sieve[0]=0 ; 
        sieve[1] = 0;
        for(int i = 2 ; i <= n; i++ ){
            if(sieve[i]==1) count++;
        }
       
        return count;




    }
};                   
int main(){
    
    return 0;
}