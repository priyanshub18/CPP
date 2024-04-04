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

    int num1 = 0 , num2 =0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0) num1++;
        else num2++;
        
        
    }


    for(int i = 0 ; i < n ; i++){
       if( i < num1) arr[i] = 0 ;
       else arr[i] = 1;
    }
    
    

    display(arr);



}