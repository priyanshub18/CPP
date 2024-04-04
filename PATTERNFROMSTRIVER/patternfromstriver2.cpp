#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"please enter the input ";
    cin>>n;
    
    int nst = 1;int nsp = 2*n-2;
    for (int  i = 1; i <= n ; i++)
    {
      
        for (int  j= 1; j <= nst; j++)
        {
            
           cout<<j<<" ";
        //    t++;
        }
        
        for (int  k = 1; k <= nsp; k++)
        {
            cout<<"  ";
        }
        
        for (int l = 1; l <= nst; l++)
        {
            // int t =1;
            cout<<(i-l+1)<<" ";
            
        }
        
        
          nsp-=2;
          nst++;
          
    cout<<endl;
    }
    

}