#include<iostream>
#include<climits>

using namespace std;

int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;



    int arr[size];
    cout<<"Enter the array : ";
    for(int i = 0 ; i < size ; i++) cin>>arr[i];


    int max  = INT_MIN;



    for (int i = 0; i < size ; i++)
    {
        if( arr[i] > max) max = arr[i];
    }
    
    int s_max = INT_MIN;


    for(int i = 0 ; i < size ; i++){
        if (arr[i] != max && s_max < arr[i])
        {
            s_max = arr[i];
        }
        
    }

    cout<<"The second maximum element is "<<s_max;

    //similar is the minimum of the array
}