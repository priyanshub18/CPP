#include<iostream>
using namespace std;

int setbit(int n){
    if(n == 0) return 0;
    int t = n & (n-1);
    return 1 + setbit(t);
}

int main(){
    int n = 26;
    cout<<setbit(n);
    //cout<< __builtin_popcount(21);

    //cout<<count;
}