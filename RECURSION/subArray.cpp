#include<iostream>
using namespace std;
#include<vector>

void subArray(vector<int> v , int arr[] , int n , int idx){
    if(idx == n){
        for(int ele : v){
            cout<<ele;
        }
        cout<<endl;
        return;
    }
    subArray(v , arr , n , idx+1);
    if(v.size() == 0 ){
    v.push_back(arr[idx]);
    
    subArray(v , arr , n , idx+1);}
    else if (arr[idx -1] == v[v.size()-1])
    {
        v.push_back(arr[idx]);
    
    subArray(v , arr , n , idx+1);}
    }
    


int main(){
    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/4;
    vector<int> v;

    subArray(v ,arr,n,0 );
}