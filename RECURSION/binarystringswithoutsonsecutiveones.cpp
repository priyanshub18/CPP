#include<iostream>

using namespace std;
void binaryString(string ans , int n){
        if( ans.length() == n){
            cout<<ans<<endl;
            return;
        }

        binaryString(ans+"O" ,n );
        if(ans[ans.length()-1]  != '1'){
            binaryString(ans +"1" , n);
        }
    
}

int main(){
    int n = 3;
    binaryString("",4);
}