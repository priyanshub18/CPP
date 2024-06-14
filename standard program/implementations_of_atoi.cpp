#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        double  num = 0;
        bool flag = true;
        while(s[i] == ' '){
                i++;
            }
        if(s[i] == '-'){
             flag = false;
             i++;
        }
        else if(s[i] == '+'){
             flag = true;
             i++;
        }
        while(s[i] == '0'){
            i++;
        }
        while(i < s.length()){
            
            if(s[i] >='0' and s[i] <= '9'){
                num = num * 10 + (s[i] - '0');
                i++;
            }
            else{
                break;
            }

        }
        if(num > INT_MAX and flag == false)return INT_MIN;
        if(num > INT_MAX and flag == true)return INT_MAX;

        return flag ? (int)num : (int)num * (-1);
    }
};      
int main(){
    
    return 0;
}