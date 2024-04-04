#include<iostream>
#include<vector>
using namespace std;

void merge( vector<int>& res ,vector<int>& a ,vector<int>& b){
    int i = 0 ;
    int j = 0 ; 
    int k = 0 ;
    while(i  < a.size() && j < b.size() ){
        if(a[i] < b[j]){
            res[k++] = a[i++];
        }
        else{
            res[k++] = b[j++];
        }
    }
    if(i == a.size()){
        while(j < b.size())res[k++] = b[j++];
        
    }
    else if(j == b.size()){
        while(i < a.size()){
            res[k++] = a[i++];
        }
    }
}
int main(){
    
    int arr[] = {1,4,5,8};
    int n1 = sizeof(arr)/4;
    vector<int> a(arr,arr+n1);
    int brr[] = {2,3,6,7,10,12};
    int n2 = sizeof(brr)/4;
    vector<int> b(brr , brr+ n2);
    // for( int ele : b){
    //     cout<<ele<<endl;
    // }
    vector<int> res(n1 + n2);

    merge(res ,a , b );
    for( int ele : res){
        cout<<ele<<" ";
    }

}