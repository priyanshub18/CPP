#include<iostream>

using namespace std;

void display(int arr[] , int n , int idx){
    if(idx == n)return;
    cout<<arr[idx]<<endl;
    display(arr, n , idx+1);
}
int main(){
    int arr[] = {2 ,3 ,4 ,5 ,6 ,7 ,8 ,9 ,12};
    int n = sizeof(arr)/4;
    display(arr,n,0);

}