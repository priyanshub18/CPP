#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution {
public:
    int trap(vector<int>& a) {
        int n = a.size();
        int i = 0 , j = n-1;
        int leftmax = 0 , rightmax = 0;
        int ans = 0;
        while(i <= j){
            if(a[i] <= a[j]){
                if(a[i] >= leftmax) leftmax = a[i];
                else{
                    ans+= (leftmax - a[i]);
                   
                }
                i++;
            }
            else{
                if(a[j] >= rightmax) rightmax = a[j];
                else{
                    ans+= (rightmax - a[j]);
                   
                }
                j--;
            }
        }
        return ans;
    }
};            
int main(){
    
    return 0;
}