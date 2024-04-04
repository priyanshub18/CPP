#include<iostream>
#include<vector>
using namespace std;

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
    n = arr.size();
    int i = 0;
    int j = n - 1;

    while( i  <= j){
        int temp = arr[i];
        arr[i++] = arr[j];
        arr[j--] = temp;
        
    }

    
    display(arr);
    
    
    
    
    }
