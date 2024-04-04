#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int> arr1 ,arr2 ; 

    int n;
    cout<<"Enter the number of element in the array: ";
    cin>>n;

    cout<<"Enter your array: ";
    for( int i = 0 ; i < n ; i++){
        int input; 
        cin>>input;
        arr1.push_back(input);
         

    }
    for (int i = 0; i < arr1.size(); i++)
    {
        arr2.push_back(arr1[arr1.size()-i-1]);
    }
    
   for (int i = 0; i < arr2.size(); i++)
   {
        cout<<arr2[i]<<" ";
           }
}