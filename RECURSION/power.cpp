#include<iostream>
using namespace std;
float power(float a ,float b){
    if(b == 0) return 1 ;
    if(b < 0){
        a = 1/a ;
        b = -b;
    }
    int t = (int)b;
    //return a * power(a,b-1);
    if(t & 1){
       return a * pow(a*a,b/2) ;
    }
    else{
        return pow(a*a,b/2) ;
    }
    
}



int main(){
    float a = 9;
    float b  = -3;
    cout<<power(3,4);

}