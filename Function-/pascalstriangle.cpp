#include<iostream>
using namespace std;
int fact(int n){
    int f= 1;
    for (int i = 2; i <= n; i++)
    {
        f *= i;
    }
    return f;   
}

int comb(int n , int r){
    int t = fact(n)/(fact(r)*fact(n-r));
    return t;
}
int main(){
   int n;
   cin>>n ;
   int nsp =  2 * n;

   for (int  i = 0; i <= n; i++)

   {
        for (int k = 1; k <= nsp; k++)
        {
          cout<<"  ";
        }
        
        for (int j = 0; j <= i ; j++)
        {
           cout<<comb(i,j)<<"   ";
        }
        
        nsp--;
        cout<<endl;
   }
   


   
}