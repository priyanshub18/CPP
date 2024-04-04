#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;

  int bin = 1;
    for (int  i = 1; i <= n ; i++)
    {
        if (i % 2 == 0) bin = 0;
        else bin = 1;
        
        for (int  j = 1; j <= i; j++)
        {   
            if (bin)
            {
               cout<<bin<<" ";
               bin = 0;
               
            }
            else{
                cout<<bin<<" ";
                bin = 1 ;

            }
            

            
            

        }
        cout<<endl;
        
    }
    

}