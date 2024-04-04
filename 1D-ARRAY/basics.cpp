#include<iostream>
using namespace std;

void display( int arr[]){
    //do something 
}

int main(){
    int size;
    cout<<"Enter the number of entries: ";
    cin>>size;
    //BASICS OF INPUT AND OUTPUT 
    int arr[size];
    for(int i = 0 ; i < size; i++) cin>>arr[i];
    for(int i = 0 ; i < size; i++) cout<<arr[i]<<" "; 

    //TO FIND THE SIZE OF THE ARRAY WE USE THIS KIND OF JUGAAAD 
    int arr[] = { 1,3,4,5,6,36,7,4,6};

    int t = sizeof(arr)/sizeof(arr[0]);



    //remember that arrays are always passed by reference by themselves;



    cout<<t;

}