#include<iostream>
#include<vector>
using namespace std;

void reversearray(vector<int> &arr , int i , int j ){

    while(i <= j ){
        int temp = arr[i];
        arr[i++] = arr[j];
        arr[j--] = temp;
        
    }

}
void display(vector<int> &arr){
    for (int i = 0; i < arr.size(); i++)
    {

        cout<<arr[i]<<" ";
    }
    
}


int main(){

    vector<int> arr ; 

    int n;
    cout<<"Enter the number of element in the array: ";
    cin>>n;

    cout<<"Enter your array: ";
    for( int i = 0 ; i < n ; i++){
        int input; 
        cin>>input;
        arr.push_back(input);
         

    }

    int k ;
    cout<<"Enter the places to which array is to be rotated: ";
    cin>>k;



    k = k % arr.size();


    reversearray(arr,0 ,arr.size()-k-1);
    reversearray(arr,arr.size()-k , arr.size()-1);
    reversearray(arr,0,arr.size()-1);

    display(arr);
    
    }
    