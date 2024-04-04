#include<iostream>
using namespace std;
//if we need to remove o(n^2) use pivot as (si+ei)/2;
int partition(int arr[] , int si , int ei){
    int pivot = arr[si];
    int count = 0;
    for(int i = si; i <= ei ; i++){
        if(arr[i] < pivot) count++;
    }


    int pivotIdx = count + si;

    swap(arr[si] , arr[pivotIdx]);


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
void quicksort(int arr[] , int si , int ei){
    if(si >= ei) return ;
    int pivotIdx = partition(arr,si,ei);

    quicksort(arr , si , pivotIdx-1);
    quicksort(arr , pivotIdx+1 , ei );
}

int main(){
    int arr[] ={5,1,5,2,7,6,3,4 , -8};
    int n = sizeof(arr)/4;
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }

    quicksort(arr , 0 , n-1);
    cout<<endl;
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
}