#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
                        
int main(){
    unordered_map<int , int > mp;
    int n = 60;
    for(int i = 2 ; i < 60 ;i++){
        int count = 0;
        while( n % i == 0){
            n /= i;
            count++;
        }
        if(count != 0 )cout<<i<<endl;

    }
    // for(auto ele : mp){
    //     cout<<ele.first <<"^"<<ele.second<<endl;
    // }
    return 0;
}