#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
int f(vector<int>& arr ,int page){
    int stu = 1 , pagesStu = 0;
    for(int i = 0 ; i < arr.size() ; i++){
        if(pagesStu + arr[i] <= page){
            pagesStu += arr[i];
        }
        else{
            stu++;
            pagesStu = arr[i];
        }
    }
    return stu;

}         
int BS(vector<int>& arr , int number){
    if( arr.size() < number)return -1;
    int lo = *max_element(arr.begin() , arr.end());
   
    int hi = accumulate(arr.begin() , arr.end() , 0);//get the feeling bhai 

   
    while(lo <= hi){
        int mid  = lo + ( hi - lo)/2;


        if(f(arr, mid) <= number ){
            hi = mid - 1;
        }
        else{
            lo = mid + 1;
        }
    }
    return lo;
}      
int main(){
    vector<int> v {25 , 46 , 28 , 49 , 24};
    cout<<BS(v , 4);
    return 0;
}