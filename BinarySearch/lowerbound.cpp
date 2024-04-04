#include<iostream>
#include<algorithm>
using namespace std;


int lowerBound(int arr[], int n , int target){
    int low = 0 ;
    int high = n-1;
    bool flag = false;
    while(low  <= high){
        int mid = low + (high - low)/2;

        if(target == arr[mid]) {
            flag = true;
            return arr[mid-1];
        }
        else if (target > arr[mid])
        {
           low = mid + 1;
        }
        else{
            high = mid -1 ;
        }    
    }
    
        return arr[high];
    

}

int main(){
    int arr[] = {1 ,4 ,6 ,8 ,9 ,10 , 12 , 15 };
    int n = sizeof(arr)/ 4;

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    int target ;
    cin>>target;
    cout<<lowerBound(arr, n , target);
    

}