#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[] = {0, 1 ,2 ,3 ,4 ,5 ,7 ,8 };
    int n = sizeof(arr)/ 4;

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
   

    int low = 0 ;
    int high = n-1;
    int mid;
    
    while(low  <= high){
         mid = (high + low)/2;

        if(mid == arr[mid]) {
            low = mid+1;
        }
        else{
            high = mid -1 ;
        }
    }
    cout<<mid;
     

}