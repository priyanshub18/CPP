#include<iostream>
using namespace std;

int minbit(int n ,int m){
    int t = n ^ m;
    int count = 0;
    while(t != 0){
        count++;
        t = t &(t -1);
    }

    return count;
}

int main(){
    int n = 23;
    int m = 31;
    cout<<minbit(n , m);

}