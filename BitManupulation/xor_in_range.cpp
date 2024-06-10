#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
 class Solution {
    
  public:
    int Xor(int n){
        if(n % 4 == 0) return n;
        if(n % 4 == 1) return 1;
        if(n % 4 == 2) return n+1;
        if(n % 4 == 3) return 0;
    }
    int findXOR(int l, int r) {
        return Xor(l-1) ^ Xor(r);
    }
};                       
int main(){
    
    return 0;
}