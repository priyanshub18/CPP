#include<iostream>
#include<vector>
                    
using namespace std;
       //sliding window algorithm                 
int main(){
    int arr[] = {7,1,2,5,8,4,9,3,6,};
    int n = sizeof(arr)/4;
    int k = 4;
    int maxSum  = INT_MIN;
    int maxidx = 0;
   
   //current window sum = prev window sum - last window first element + this win
    int currsum = 0;
    for (int i = 0; i < k; i++)
    {
        currsum+= arr[i];
    }
    maxSum = currsum;
    int i = 1 ;
    int j = k;
    while (j < n)
    {
        currsum += arr[j++] - arr[i-1];
        if(currsum > maxSum){
            maxSum = currsum;
            maxidx = i++;
        }
        
        
    }
    cout<<maxSum<<" "<<maxidx<<" ";
    



    return 0;
}