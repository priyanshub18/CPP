#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int remainder ;
    int binary = 0 ,pf = 1;
    while(n != 0){
        remainder = n%2;
        binary+= (remainder*pf);
        pf *=10;
        n/= 2;


    }
    cout<<binary;

//  another way to do the same
//     int bit;
//     int number =0;
//     int pv = 1;
//     while(n != 0){
//         bit = n&1;
//         number+= (bit * pv);
//         pv*=10;
//         n = n >> 1;


//     }
//     cout<<number;



// }


}