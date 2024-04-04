class Solution {
public:
    
    int matrixScore(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        for(int i = 0 ; i <  m  ; i++){
            if(grid[i][0] == 0) {
                for(int j = 0 ; j < n ; j++ ){
                    if(grid[i][j] == 0) grid[i][j] = 1;
                    else grid[i][j] = 0;
                }
            }
            else continue;


        }

        //flip column 

        for(int j = 0 ; j < n ; j++){
            int noz = 0 , noo = 0;
           for(int i = 0 ; i < m ; i++){
               if(grid[i][j] == 0) noz++;
               else noo++;
           }
            if( noz > noo){
                for(int i = 0 ; i < m ; i++){
                if(grid[i][j]== 0) grid[i][j] =1;
                else grid[i][j] = 0;}
            }
            else continue;
        }
    int sum = 0 ;
         for(int i = 0 ; i < m ; i++){
             int bin = 0 ;
             int t = 1;
             for(int j = n-1 ; j >= 0 ; j--){
                 bin+= grid[i][j] * t ;
                 t*= 2;
                 
             }
             sum+= bin;




         }

         return sum;

        }
    };
