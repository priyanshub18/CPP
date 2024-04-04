#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int even = 3;
    int odd = 1;
    for (int  i = 1; i <= 2 * i -1 ; i++)
    {

        if (i % 2 == 0)
        {
            
           for (int  j = 1; j <= even; i++)
           {
                cout<<"*";
           }
          even+=2;
        }
        
        else{
            // int num = 1;
            for (int  j = 1; j <=  odd; j++)
           {
                cout<<"* ";
           }
            odd+=2;
            

        }
        cout<<endl;
    }
    
}