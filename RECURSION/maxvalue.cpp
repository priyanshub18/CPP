#include<iostream>

using namespace std;
// int maximum(int a ,int b){
//     int t = 0;
//     t= a>b?a: b;
//     return t;
// }

void printMax(int arr[] , int n ,int idx ,int maxx){
    if(idx == n){
        cout<<maxx;
        return;
    }
    if(maxx < arr[idx]) maxx = arr[idx];
    printMax(arr,n,idx+1,maxx);
}


int printmax2(int arr[] , int n , int idx){
    if(idx == n ) return INT_MIN;

    return max(arr[idx] ,printmax2(arr,n,idx+1));
}

int main(){
    int arr[] = { 1 ,3 ,5 ,7 ,9 ,10};
    int n = sizeof(arr)/4;

    printMax(arr,n,0,INT_MIN);
    cout<<endl<<printmax2(arr,n,0);
}