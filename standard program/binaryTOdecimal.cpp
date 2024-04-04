#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int remainder ;
    int decimal = 0 ,pf = 1;
    while(n != 0){
        remainder = n%10;
       decimal+= (remainder*pf);
        pf *=2;
        n/= 10;


    }
    cout<<decimal;



}