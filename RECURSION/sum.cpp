#include<iostream>
using namespace std;
//without any parameter 
int sum(int n ){
    if(n == 1 ) return 1;
    return n + sum(n-1);
}


//with parameter 
int sum2(int summ , int n ){
    if(n==1 ) return 1 ;
    else summ = n+sum2(summ,n-1);
    return summ;
}
int main(){
    int n = 9;
    int summ = 0;
    cout<<sum(n)<<endl;
    cout<<sum2(summ,n);

}