#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int bit;
    int number =0;
    int pv = 1;
    while(n != 0){
        bit = n&1;
        number+= (bit * pv);
        pv*=10;
        n = n >> 1;


    }
    cout<<number;



}