#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"please enter the input that is odd";
    cin>>n;
    
    int nst = n;int nsp = 0;
    for (int  i = 1; i <= 2 *n ; i++)
    {
       
        for (int  j= 1; j <= nst; j++)
        {
           cout<<"* ";
        }
        
        for (int  k = 1; k <= nsp; k++)
        {
            cout<<"  ";
        }
        
        for (int l = 1; l <= nst; l++)
        {
            cout<<"* ";
        }
        
        if (i < n)
            {
               nsp+=2;
               nst--;
            }
        else if (i == n)
        {
            ;
        }
            
        else{
            nsp-= 2;
            nst++;
        }

    cout<<endl;
    }
    

}