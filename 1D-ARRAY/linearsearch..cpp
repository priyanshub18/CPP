#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    int search;
    cout<<"Enter the number to be search";
    cin>>search;

    for(int i = 0 ; i < n ; i++) cin>>arr[i];


    bool flag = false;
    int idx;


    for (int i = 0; i < n; i++)
    {
       if(arr[i] == search ){
            idx = i;
            flag = true;
            break;
       }
    }
    

    if(flag == true) cout<<"Element is found at position : "<<idx + 1;
    else cout<<"Element not found";
}