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
    cout<<"enter the target: ";
    cin>>x;


    for (int  i = 0; i < arr.size(); i++)
    {
        for (int j = i; j < arr.size(); j++)
        {
           if(x == (arr[i] + arr[j]) && (i != j)){
            cout<<"Required sum is found("<<i<<","<<j<<")"<<endl;
           }
        }
        
    }
    

}