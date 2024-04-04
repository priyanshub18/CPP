#include<iostream>
#include<vector>

using namespace std;

void printArray(int r , int c , int a[][4] ){
    for (int  i = 0; i <r  ; i++)
   {
    for (int j = 0; j < c ; j++)
    {
        cout<<" "<<a[i][j]<<" ";
    }
    cout<<endl;
   }
}


int main(){
   int arr[4][4] = {1,2,3,4,5,6,7,8,9 ,10 ,11, 12,  13 ,14,15,16};


    printArray(4, 4, arr);
    cout<<"\n";


   for (int  i = 0; i <4  ; i++)
   {
    for (int j = 0; j < i; j++)
    {
        swap(arr[i][j], arr[j][i]);
    }
    
   }
   printArray(4 ,4 , arr);


}  




