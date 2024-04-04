#include<iostream>
using namespace std;

int main(){
    int arr[6] = {1,4,5,6,7,8};

    int *ptr = arr;



    cout<<ptr<<endl;
    cout<<&arr[0]<<endl;

 
    cout<<ptr+1<<endl;
    cout<<&arr[0]+1<<endl;;




    //arr and ptr are sameee


    cout<<ptr[0]<<" == "<<arr[0]<<endl;;




    ///another way of accessing the value

    for(int i = 0 ; i < 6 ; i++){
        cout<<*(ptr+ i)<<" ";
        ;
    }

    cout<<endl;

    for(int i = 0 ; i < 6 ; i++){
        cout<<*ptr<<" ";
        ptr++;
    }




}