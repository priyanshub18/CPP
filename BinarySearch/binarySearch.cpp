#include<iostream>
#include<algorithm>
using namespace std;

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

    int low = 0 ;
    int high = n-1;
    bool flag = false;
    while(low  <= high){
        int mid = (high + low)/2;

        if(target == arr[mid]) {
            flag = true;
            cout<<"found at "<<mid<<" index";
            break;
        }
        else if (target > arr[mid])
        {
           low = mid + 1;
        }
        else{
            high = mid -1 ;
        }

   
        
    }
     if(flag == false) {
        cout<<"not found";
    }

}