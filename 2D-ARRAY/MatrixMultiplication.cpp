#include<iostream>
#include<vector>

using namespace std;


vector<vector<int> > matrixMultiplication(vector<vector<int> >& a , vector<vector<int> >& b){

    
    int m = a.size(), n = a[0].size() , p = b.size() , q = b[0].size();
    vector<vector<int> > c( m , vector<int> (q));
    if( n != p) return c;


    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
             c[i][j] = 0;

             for (int k = 0; k < n; k++)
             {
               c[i][j] += (a[i][k] * b[k][j]);
             }
             
        }
        
    }
    
    return c;
   
 }




int main(){
    int m ,n ,p ,q ;
    cin>>m>>n>>p>>q;


    vector<vector<int> > a(m , vector<int> (n));



      for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>a[i][j];
        }
       
        
    }



    vector<vector<int> > b(p , vector<int> (q));




      for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cin>>b[i][j];
        }
       
        
    }

    vector<vector<int> > c = matrixMultiplication(a,b);
    


     for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
        
    }




    
    
    
    
}