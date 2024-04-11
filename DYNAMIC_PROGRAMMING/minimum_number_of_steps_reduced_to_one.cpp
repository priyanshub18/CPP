#include<iostream>
#include<vector>
                    
using namespace std;

int f(int n ){
    if(n == 3 or n== 2 ) return 1;
    if(n == 1) return 0;
    return 1+min(f(n-1),  min((n% 2)?f(n/2 ): INT_MAX , (n% 3 == 0)?f(n/3): INT_MAX));
}
int main(){
    int n =10 ;
    cout<<f(n);
    return 0;
}