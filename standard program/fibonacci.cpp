#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int a = 0;
    int b = 1;

    for (int  i = 1; i <= n-1; i++)
    {
        int sum = a+b;
        a = b;
        b = sum; 
        
    }
    cout<<"the fibonacci term is : "<<b<<endl;
    
}