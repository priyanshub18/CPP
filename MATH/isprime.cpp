#include<iostream>
#include<vector>
                    
using namespace std;
int factor ;
bool isPrime( int n ){

    if(n == 1) return false;
    for (int i = 2; i < sqrt(n); i++){
        if( n % i == 0) return false;
    }
    
    return true;
    
}
int main(){
    cout<<isPrime(1001);
    return 0;
}


//rest are there in the leetcode  