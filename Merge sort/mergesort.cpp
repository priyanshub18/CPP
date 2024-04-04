#include<iostream>
#include<vector>
using namespace std;

void merge( vector<int>& res ,vector<int>& a ,vector<int>& b){
    int i = 0 ;
    int j = 0 ; 
    int k = 0 ;
    while(i  < a.size() && j < b.size() ){
        if(a[i] <= b[j]){
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
void mergeSort(vector<int>& v){
    
    int n = v.size();
    
    if(n == 1) return ;
    int n1  = n/2; 
    int n2 = n-n/2;
    vector<int> a(n1) , b(n2);

    for(int i = 0 ;  i < n1 ; i++){
        a[i] = v[i];
    }
    for(int i = 0 ; i < n2 ; i++){
        b[i] = v[i+ n1];
    }
    mergeSort(a);
    mergeSort(b);



    merge(v , a ,b);
    a.clear();
    b.clear();
}
int main(){
    
    int arr[] = {5 ,1 ,3 , 0 , 4 ,9 ,6};

    int n = sizeof(arr)/4;
   

    vector<int> v(arr , arr+n );
    for(int ele : v){
            cout<<ele<<" ";
        }
     cout<<endl;
    mergeSort(v);
    for(int ele : v){
        cout<<ele<<" ";
    }

}