#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        stack<int> st;
        for(int i = n-1 ; i>= 0 ; i--){
            st.push(i);
        }
        
        int i , j;
        
        while(st.size() > 1){
            i = st.top();
            st.pop();
            j = st.top();
            st.pop();
            
            
            if(M[i][j] and !M[j][i]) st.push(j);
            else if(!M[i][j] and M[j][i]) st.push(i);
            
        }
        
        
        if(st.empty())return -1;
        
        int num = st.top();
        
        //verify
        int row = 0, col = 0;
        for(int i = 0 ; i < n ; i++){
            row += M[num][i];
            col += M[i][num];
        }
        
        
        return row == 0 and col == n-1 ? num : -1;
    }
};            
int main(){
    
    return 0;
}