#include<iostream>
using namespace std;

int maxthree(int a , int b , int c){
    int maxx = max(a,b);
    maxx = max(maxx, c);
    return maxx;
}

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int t = maxthree(a ,b , c);
    cout<<t;
}