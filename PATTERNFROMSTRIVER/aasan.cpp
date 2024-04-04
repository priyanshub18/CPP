#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter the number : ";
    cin>>n;
    int i  = 1; 
    while( i <= n){
        int j = 1;
       int t = i+64;
        while(j <= n){
            cout<<(char)t<<" ";
            t++;
            j++;
        }
    i++;
        cout<<endl;
    }



}