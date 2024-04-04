#include<iostream>
using namespace std;
int max_power(int n){
    n = n | (n >>1);
    n = n | (n >>2);
    n = n | (n >>4);
    n = n | (n >>8);
    n = n | (n >>16);

    

    return (n+1)>>1;


}

int main(){
    int i = 90 ;
    int temp  = 0;;
    while (i != 0 )
    {
        temp = i;
        i = i & (i-1);

    }
    //cout<<temp;
    int t = 100;


    cout<<max_power(t);
    
}