#include<iostream>
#include<vector>
using namespace std;
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

    int x;
    cout<<"enter the searching number: ";
    cin>>x;

    int idx = -1;
    //we can also tranverse from back to reduce tym;;
    for(int i = 0 ; i < arr.size();  i++){
        if(arr[i] == x) idx = i;
    }

    cout<<idx;
    //2nd way;;
   idx = -1;
    //we can also tranverse from back to reduce tym;;
    for(int i = arr.size() - 1 ; i >= 0;  i--){
        if(arr[i] == x) {idx = i ; break;}
    }

    cout<<idx;





}