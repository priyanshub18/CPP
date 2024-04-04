#include<iostream>
#include<vector>

using namespace std;


void rotate(vector<vector<int> >& matrix) {
    reverse(matrix.begin(), matrix.end());
    for (int i = 0; i < matrix.size(); ++i)
      for (int j = i + 1; j < matrix.size(); ++j)
        swap(matrix[i][j], matrix[j][i]);
  }

int main(){
    int n ; 

    cin>>n;

    vector<vector<int> > arr( n , vector<int> (n));



    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
        


    }
    


    rotate(arr);




}




