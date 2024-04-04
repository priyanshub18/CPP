#include<iostream>
#include<vector>


using namespace std;


int main(){
    int m ,n ;
    cin>>m>>n;


    vector<vector<int> > a(m , vector<int> (n));



      for (int i = 0; i < m ; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>a[i][j];
        }
    }

//so much simple bs ek cheez krni hai tuhje bs i ko j se replace krna hai 
      for (int i = 0; i < m; i++)
    {
        

            if( i & 1 ){
            for (int j = n - 1; j >= 0; j--){

                cout<<a[j][i]<<" ";
            
    }}
    else {
         for (int j = 0; j   < n ; j++){

                cout<<a[j][i]<<" ";
            
    }

    }
   
    




}


}
