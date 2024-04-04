#include<iostream>

using namespace std;

void hanoi(int n , char a , char b , char c){
    if(n==0)return ;
    hanoi(n-1,a,c ,b);
    cout<<a<<" => "<<b<<endl;
    hanoi(n-1,b ,a,c);
}

int main(){
    int n  = 6 ;
    hanoi(n , 'A' , 'B' , 'C');
}