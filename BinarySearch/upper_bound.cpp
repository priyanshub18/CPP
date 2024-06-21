#include<iostream>
#include<algorithm>
using namespace std;


int upperBound(int arr[], int n , int target){
    int low = 0 ;
    int high = n-1;
    int ans = n;
    while(low  <= high){
        int mid = low + (high - low)/2;

        if(arr[mid] > target) {
           ans = mid;
           high = mid -1 ;
        }
        else{
            low = mid + 1 ;
        }
         
    
    
       
    
    }
    return ans;
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
    cout<<upperBound(arr, n , target);
    

}