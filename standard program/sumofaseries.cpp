#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter the number of terms ";
    cin>>n;
    int sum = 0;
    for (int  i = 1; i <= n ; i++)
    {
       sum =sum + pow(-1,i+1)*i ;
    }
    cout<<sum<<endl;




    if (n %2 == 0)
    {
        int sum = -n/2;
        cout<<sum;
    }else{
        int sum = -n/2+n;
        cout<<sum;
    }
    
    }

