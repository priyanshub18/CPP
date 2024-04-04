#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter the number : ";
    cin>>n;
    int i  = 1;
    while( i <= n){
        int j = 1 ;

        while(j <= i){
            cout<<(char)(i+64);
            j++;
        }
        cout<<endl;
        i++;
    }



}