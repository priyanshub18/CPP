#include<iostream>
#include<vector>
using namespace std;
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void sort01(vector<int> &arr){
    int n = arr.size();

    int i = 0 , j = n-1;


    while( i < j){
        if( arr[i] == 1 && arr[j] == 0){
            swap(arr[i] , arr[j]);
        }
        if ( arr[i] == 0 ) i++;
        if( arr[j] == 1) j--;
        
        
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

    sort01(arr);
    
    

    display(arr);



}