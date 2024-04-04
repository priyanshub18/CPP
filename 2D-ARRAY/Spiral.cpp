#include<iostream>
#include<vector>


using namespace std;


int main(){
    int m ,n ;
    cin>>m>>n;


    vector<vector<int> > a(m , vector<int> (n));

      for (int i = 0; i < m ; i++){
        for (int j = 0; j < n; j++) {
            cin>>a[i][j];}}
    int tne = n * m ;
    int count = 0;

    int minr= 0 , minc = 0 , maxr = m-1 , maxc = n-1;
   while (minr <= maxr || minc <= maxc)
   {
        for (int  i = minc; i <= maxc && count < tne ; i++)
        {
           cout<<a[minr][i]<<" ";
           count++;
        }
        minr++;

        for (int i = minr; i <= maxr && count < tne ; i++)
        {
            cout<<a[i][maxc]<<" ";
            count++;
        }
        
        maxc--;


        for (int i = maxc; i >= minc && count < tne ; i--)
        {
            cout<<a[maxr][i]<<" ";
            count++;
        }

        maxr--;


        for (int i = maxr; i >= minr && count < tne ; i--)
        {
            cout<<a[i][minc]<<" ";
            count++;
        }
        minc++;
        
        
   }
   





   
    






}
