#include<iostream>
using namespace std;

int main(){
    int a[5];
    /*remember that array_name refers to the base address 
    of the array that is addresss of the array_name[0]*/
    //a+1 is next element while &a+1 is next array
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<&a[0]<<endl;
    cout<<a+1<<endl;
    cout<<&a+1<<endl;
    cout<<&a[0]+1<<endl;


}