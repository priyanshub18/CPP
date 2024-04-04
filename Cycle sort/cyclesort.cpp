#include<iostream>
using namespace std;


int main(){
    int arr[] = {4,1,6,2,5,3};
    int n = sizeof(arr)/4;


    for(int i  = 0 ; i < n ; i ++){
        cout<<arr[i]<<" ";

    }


    int i = 0 ;
    while(i < n){
        int correctidx = arr[i] - 1;
        if(i == correctidx ) i++;
        else swap(arr[i] , arr[correctidx]);
    }

    cout<<endl;
    for(int i  = 0 ; i < n ; i ++){
        cout<<arr[i]<<" ";

    }
    
}