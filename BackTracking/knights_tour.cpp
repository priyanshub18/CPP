#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
vector<int> dx {-2 , -1 ,-2 ,-2 ,2 ,1 ,2 ,1};
vector<int> dy {1 , 2, -1, -2 , 1, 2, -1, -2 };

void display(vector<vector<int> >& grid , int n){
    for(int i = 0 ; i < n ;i++){
        for (int j = 0 ; j < n ; j++){
            cout<<grid[i][j]<<"\t";
        }
        cout<<endl;
    }
}
bool is_it_safe(vector<vector<int > >& grid ,int i , int j , int n ){
    return i >= 0 and j >= 0 and i < n and j < n and grid[i][j] = -1;
}
void f(vector<vector<int>> &grid , int i , int j , int n, int count ){
    if(count == n * n -1){
        grid[i][j] = count ;
        display(grid , n);
        cout<<"*****\n";
        grid[i][j]  = -1;
        return ;
    }
    //from i , j we can go to 8 positions
    for(int t  = 0 ;  t < 8 ; t++){
    if(is_it_safe(grid , i+dx[t] , j +dy[t] , n)){
        grid[i][j] = count;
        f(grid , i+dx[t] ,j+dy[t] , n , count +1);
        grid[i+dx[t]][j+dy[t]] = -1;
    }
    }
}
void knights_tour(int n , int i , int j ){
    vector<vector<int>> grid(n , vector<int>(n , -1)); 
    // -1 here means an empty thing 
    f(grid , i , j, n , 0);

}                       
int main(){
    knights_tour(8 , 0 , 0);
    return 0;
}