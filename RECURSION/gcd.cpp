#include<iostream>
using namespace std;
int GCD(int a , int b){
    if(a == 0)return b;
    else return GCD(b % a , a);
}
//time complexity is 0(log(a+b));

int main(){
    int a, b;
    cin>>a>>b;

    cout<<GCD(a,b);
}