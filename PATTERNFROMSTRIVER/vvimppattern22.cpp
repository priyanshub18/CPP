#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"please enter the input";
    cin>>n;
int k  = 1;int t = n;
    for (int i = 0; i < 2*n -1; i++)
    {
        for (int j = 0; j < 2*n -1; j++)
        { 
            int top = i,bottom = j,left = (2*n-2) - j,right = (2*n-2) - i;


            cout<<(n-min(min(top,bottom),min(left,right)))<<" ";
        }
        
        cout<<endl;
    }
    


}
