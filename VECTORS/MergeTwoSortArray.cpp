#include<iostream>
#include<vector>

using namespace std;

void display(int c[], int size){
    for (int i = 0; i < size; i++)
    {
       cout<<c[i]<<" ";
    }
    
}


void mergeTwoSortedArray(int a[] ,int b[] , int n , int m){

    int i = 0,j = 0, k = 0;

//    int  n = a.size() , m = b.size();
   int c[n+m];

   

    while(i < n && j < m){
        if(a[i] < b[j]) c[k++] = a[i++];
        else  c[k++] = b[j++];
    }
    
    if(i == n){
        while(j < m){
            c[k++] = b[j++];
        }

    }
    else {
        while(i < n){
            c[k++] = a[i++];
        }
    }
    
    display(c, n+m);
}

int main(){

    int a[] = {1 ,3 ,5 ,7 , 9, 29 ,56};
    int b[] = { 2 ,4 ,6 ,8 ,9,19};
    int n = sizeof(a)/4;
    int m = sizeof(b)/4;


    mergeTwoSortedArray(a,b,n,m);

}
