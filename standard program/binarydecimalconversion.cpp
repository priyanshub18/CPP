#include<iostream>
using namespace std;
int tobinary(string& s){
    int n = s.size();
    int num = 0 ;
    for(int i = n-1 ; i >= 0 ; i-- ){
        int t = s[i] -'0';
        num += t*(1 << (n-i-1));
    }

    return num;
}

string todecimal(int num){
    string result = "";
    while( num  > 0){
        if(num % 2 ==0 ) result = '0' +result;
        else result = '1' + result;
        num = num /2;
    }
    return result;

}

int main(){
    string s = "10100";
    int t = tobinary(s);
    cout<<t<<endl;
    int u = 20;
    cout<<todecimal(u);
}