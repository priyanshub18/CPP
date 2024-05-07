#include<iostream>
using namespace std;
//if we need to remove o(n^2) use pivot as (si+ei)/2;
int partition(int arr[] , int si , int ei){
    int pivot = arr[si];
    int i = si;
    int j = ei;

    while(i < j ){
        while (arr[i] <= pivot and i <= ei) i++;
        while (arr[j] > pivot and j >= si) j--;

        if(i < j) swap(arr[i] , arr[j]);
        
    }


    swap(arr[si] , arr[j]);

    return j;
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