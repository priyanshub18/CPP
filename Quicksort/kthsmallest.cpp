#include<iostream>
using namespace std;
int partition(int arr[] , int si , int ei){
    int pivot = arr[(si + ei)/2];
    int count = 0;
    for(int i = si; i <= ei ; i++){
        if(i ==(si + ei)/2) continue;
        if(arr[i] < pivot) count++;
    }


    int pivotIdx = count + si;

    swap(arr[(si + ei)/2] , arr[pivotIdx]);


    int i = si , j = ei;
    while( i < pivotIdx && j > pivotIdx){
        if(arr[i] < pivot) i++;
        if(arr[j] > pivot) j--;
        else if(arr[i] > pivot && arr[j] <= pivot){
            swap(arr[i] , arr[j]);
            i++;
            j--;
        }
    }

    return pivotIdx;

}
int kthsmallest(int arr[] , int si , int ei , int k){
    int pivotIdx = partition(arr,si,ei);
    if( pivotIdx + 1 == k) return arr[pivotIdx];
    else if(pivotIdx+ 1 > k) return kthsmallest(arr , si , pivotIdx-1 ,k);

    else return kthsmallest(arr , pivotIdx+1 , ei , k);
    //return arr[pivotIdx]   ;
}
int main(){
    int arr[] ={5,1,8,2,7,6,3,4,-8};
    int n = sizeof(arr)/4;
    int k = 8;
    // for(int i = 0 ; i < n ; i++){
    //     cout<<arr[i]<<" ";
    // }

    
    cout<<kthsmallest(arr , 0 , n-1 , k);;
    // for(int i = 0 ; i < n ; i++){
    //     cout<<arr[i]<<" ";
    // }
}