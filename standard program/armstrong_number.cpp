// #include<bits/stdc++.h>
// #include<vector>
                    
// using namespace std;
                        
// int main(){
//     int i;
//     cin>>i;

//     int n = to_string(i).size();
//     int sum = 0;
//     int num = i;
//     while(i > 0){
//         int r = i % 10;
//         sum +=  pow(r , n);
//         i  = i / 2 ;
//     }

//     cout<<(num == sum);
//     return 0;
// }
#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
                        
int main(){
    
    return 0;
}

class Solution {
public:
    bool isArmstrong(int n) {
        int k = to_string(n).size();
        int s = 0;
        for (int x = n; x; x /= 10) {
            s += pow(x % 10, k);
        }
        return s == n;
    }
};