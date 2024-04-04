#include<iostream>
#include<vector>
using namespace std;
void combination(vector<int> v,int arr[], int n, int target , int idx ){
    if(target == 0 ){
        for(int ele : v){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
    if(target < 0)return ;
    for(int i = idx ; i < n ; i++){
        v.push_back(arr[i]);
        combination(v ,arr,n ,target - arr[i] , i);
        v.pop_back();
    }
}

int main(){
    int arr[] = {2,3,5};
    int n =  sizeof(arr)/4;
    vector<int> v ;
    int target  = 8;
    combination(v ,arr, n , 8 , 0);
}