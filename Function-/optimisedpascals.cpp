#include<iostream>
using namespace std;

int main(){
   int n;
   cin>>n ;


   for (int  i = 0; i <= n; i++)
   {    int prev = 1;
        for (int j = 0; j <= i ; j++)
        {
            
            int curr = prev * (i -j)/(j+1);
            cout<<prev<<" ";
            prev = curr;
        }
   
   cout<<endl;
   
   }


   
}