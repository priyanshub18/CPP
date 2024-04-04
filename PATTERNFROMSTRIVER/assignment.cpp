#include<iostream>
using namespace std;
int main(){
   int n ;
   cin>>n;
    int nsp = 0;

    for (int  i = 1; i <= n; i++)
    {
        int num = 1;
        int rev = n-1;
        for (int  j = 1; j <= n+ 1 - i ; j++)
        {
            cout<<num<<" ";
            num++;
        }
        for (int  j = 1; j <= nsp ; j++)
        {
            cout<<"  ";
        }
        for (int  j = 1; j <= n - 1 - i ; j++)
        {
            cout<<rev<<" ";
            rev--;
        }
        cout<<endl;
        nsp++;
        
    }

}