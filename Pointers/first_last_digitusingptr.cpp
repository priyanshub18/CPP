#include<iostream>
using namespace std;


void foo(int n,int &fd , int &ld){
    ld = n%10;
    n /=10;
    while (n > 9)
    {
        n/= 10;

    }
    fd = n;

}
int main(){
    int n ;
    cin>>n;
    int firstdigit ,lastdigit;

    foo(n,firstdigit,lastdigit);


    cout<<firstdigit<<" "<<lastdigit;
}
