#include<iostream>
                    
#include<vector>
using namespace std;
void factors(int n ){
    for(int i = 1 ; i <= sqrt(n) ; i++){
        if(n % i == 0 ){
            cout<<i<<" ";
            if( i != sqrt(n)){
                cout<<n/i<<" ";
            }
        }
    }
}                    
int main(){
    factors(49);
    return 0;
}