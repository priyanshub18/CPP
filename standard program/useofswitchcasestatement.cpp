#include<iostream>
using namespace std;
int main(){
    int x , y;
    char o;
    cout<<"Enter the first operator ";
    cin>>x;
    // cout<<"Enter the operand ";
    cin>>o;
    cout<<"Enter the second operator ";
    cin>>y;



    switch (o)
    {
    case '+':
        cout<<"x+y= "<<x+y;
        break;
    case '-':
        cout<<"x-y= "<<x-y;
        break;
    case '*':
        cout<<"x*y= "<<x*y;
        break;
    case '/':
        cout<<"x/y= "<<float(x)/y;
        break;
    default:
        cout<<"entered operand is wrong";
        break;
    }
}