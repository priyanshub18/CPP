#include<iostream>
using namespace std;

int gcd(int a , int b){
    while(b > 0){
       
        int temp = a;
        a = b;
        b = temp % b ;
        
    }
    return a;
}


int main(){
    int a ,b ;
    cin>>a >> b;
    int c = gcd(a , b);
    cout<<c;
}